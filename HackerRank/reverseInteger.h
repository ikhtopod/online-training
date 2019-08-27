#pragma once

#include <limits>

#define SUM_FOR_REVERSE(x, y)				\
	if (y > 2147483647 - x) {	\
		return 0;				\
	} else {					\
		x += y;					\
	}

namespace insoLLLent::HackerRank {

int reverse(int x);

} // namespace insoLLLent::HackerRank
