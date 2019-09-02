#include "Abbreviation.h"

namespace insoLLLent::HackerRank {

class Memoize final {
private:
	std::unordered_set<std::string> m_memoize;

public:
	bool Has(std::string&& key) {
		return !m_memoize.insert(key).second;
	}
};

class Abbreviation final {
private:
	Memoize m_memoize {};
	bool m_isAbbreviation = false;

private:
	template <typename It>
	void Init(It text_b, It text_e, It pattern_b, It pattern_e) {
		if (m_isAbbreviation || (text_e - text_b < pattern_e - pattern_b)) return;

		if (pattern_e == pattern_b) {
			m_isAbbreviation = !std::any_of(text_b, text_e, ::isupper);
		} else {
			std::string memKey { text_b, text_e };
			memKey.append("#");
			memKey.append(pattern_b, pattern_e);
			if (m_memoize.Has(std::move(memKey))) return;

			bool isLowerFirstChar = std::islower(*text_b);
			char upperFirstChar = std::toupper(*text_b);

			text_b = std::next(text_b);
			if (isLowerFirstChar)
				Init(text_b, text_e, pattern_b, pattern_e);

			if (*pattern_b != upperFirstChar) return;

			Init(text_b, text_e, std::next(pattern_b), pattern_e);
		}
	}

public:
	explicit Abbreviation(const std::string& text, const std::string& pattern) {
		Init(text.cbegin(), text.cend(), pattern.cbegin(), pattern.cend());
	}

	std::string Result() const {
		return m_isAbbreviation ? "YES" : "NO";
	}
};

std::string abbreviation(std::string text, std::string pattern) {
	return Abbreviation { text, pattern }.Result();
}

} // namespace insoLLLent::HackerRank
