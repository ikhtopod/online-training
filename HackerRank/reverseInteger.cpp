#include "reverseInteger.h"

namespace insoLLLent::HackerRank {

int reverse(int x) {
	if (x == INT_MAX || x == INT_MIN) {
		return 0;
	}

	bool isNegate = x < 0;
	if (isNegate) {
		x = -x;
	}

	int result = 0;
	while (x) {
		const int oldRes = result;
		for (int i = 1; i < 10; ++i) {
			SUM_FOR_REVERSE(result, oldRes);
		}

		const int reminder = x % 10;
		SUM_FOR_REVERSE(result, reminder);

		x /= 10;
	}

	return isNegate ? -result : result;
}

} // namespace insoLLLent::HackerRank
