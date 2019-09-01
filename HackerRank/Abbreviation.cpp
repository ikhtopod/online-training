#include "Abbreviation.h"

namespace {

struct Result final {
private:
	Result() {}

public:
	inline static const char YES[4] { "YES" };
	inline static const char NO[3] { "NO" };
};

enum class Priority : char {
	Error = -2,
	Remove,
	None,
	Low,
	High,
};

using TableItem = std::vector<Priority>;
using Table = std::vector<TableItem>;

void FillTable(Table& table, const std::string& a, const std::string& b) {
	for (size_t i = 0; i < table.size(); ++i) {
		for (size_t j = 0; j < table[i].size(); ++j) {
			if (b[i] == a[j]) {
				table[i][j] = Priority::High;
			} else if (std::tolower(b[i]) == a[j]) {
				table[i][j] = Priority::Low;
			} else {
				if (std::islower(a[j])) {
					table[i][j] = Priority::Remove;
				} else {
					table[i][j] = Priority::Error;
				}
			}
		}//rof
	}//rof
}

bool CanTransform(Table& table) {
	size_t pos = std::numeric_limits<size_t>::max();

	for (size_t i = 0; i < table.size(); ++i) {

		Priority p = Priority::None;
		for (size_t j = pos + 1; j < table[i].size(); ++j) {
			if (table[i][j] == Priority::Low && p != Priority::Low) {
				p = Priority::Low;
				pos = j;
			} else if (table[i][j] == Priority::High) {
				if (p == Priority::None) {
					p = Priority::High;
					pos = j;
				} else {
					size_t countSameI = 0;
					size_t countSameJ = 0;

					for (size_t z = i; z < table.size(); ++z) {
						if (table[z][j] == Priority::High) {
							++countSameI;
						}
					}

					for (size_t z = j; z < table[i].size(); ++z) {
						if (table[i][z] == Priority::High) {
							++countSameJ;
						}
					}

					if (countSameI <= countSameJ) {
						p = Priority::High;
						pos = j;
					}

				}

				break;
			}
		}

		if (p == Priority::None) {
			return false;
		} else {
			for (size_t k = 0; k < table.size(); ++k) {
				table[k][pos] = Priority::None;
			}
		}
	}

	for (size_t j = 0; j < table.front().size(); ++j) {
		for (size_t i = 0; i < table.size(); ++i) {
			if ((table[i][j] == Priority::None) ||
				(table[i][j] != Priority::High && table[i][j] != Priority::Error)) {
				break;
			}

			if (i == table.size() - 1) {
				return false;
			}
		}
	}

	return true;
}

}

namespace insoLLLent::HackerRank {

std::string abbreviation(std::string a, std::string b) {
	if (a.size() < b.size()) return Result::NO;

	Table table {};
	table.assign(b.size(), TableItem(a.size()));

	::FillTable(table, a, b);

	return CanTransform(table) ? Result::YES : Result::NO;
}

} // namespace insoLLLent::HackerRank
