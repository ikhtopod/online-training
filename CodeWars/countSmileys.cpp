#include "countSmileys.h"

namespace insoLLLent::CodeWars {

int countSmileys(const std::vector<std::string>& arr) {
	std::regex pat { R"(^[:;][~-]?[)D]$)" }; // is correct smile
	auto pred = [&pat](std::string smile) -> bool { return std::regex_match(smile, pat); };
	return std::count_if(arr.cbegin(), arr.cend(), pred);
}

} // namespace insoLLLent::CodeWars
