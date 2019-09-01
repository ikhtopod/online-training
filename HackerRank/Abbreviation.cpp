#include "Abbreviation.h"

namespace insoLLLent::HackerRank {

class Memoize final {
private:
	std::unordered_set<std::string> m_memoize {};

public:
	bool Has(const std::string& key) {
		return !m_memoize.insert(key).second;
	}
};

class Abbreviation final {
private:
	Memoize m_memoize {};
	bool m_isAbbreviation = false;

private:
	void Init(std::string text, std::string pattern) {
		if (m_isAbbreviation || (text.size() < pattern.size())) return;

		if (pattern.empty()) {
			if (std::all_of(text.begin(), text.end(), ::islower)) {
				m_isAbbreviation = true;
			}
		} else {
			if (m_memoize.Has(text + '#' + pattern)) return;

			char textFirstChar = text.front();

			text.erase(0, 1);
			if (std::islower(textFirstChar))
				Init(text, pattern);

			if (pattern.front() != std::toupper(textFirstChar)) return;

			pattern.erase(0, 1);
			Init(text, pattern);
		}
	}

public:
	explicit Abbreviation(const std::string& text, const std::string& pattern) {
		Init(text, pattern);
	}

	std::string operator()() const {
		return m_isAbbreviation ? "YES" : "NO";
	}
};

std::string abbreviation(std::string text, std::string pattern) {
	return Abbreviation { text, pattern }();
}

} // namespace insoLLLent::HackerRank
