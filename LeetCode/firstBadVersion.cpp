#include "firstBadVersion.h"

namespace insoLLLent::LeetCode {

int badVersion = 0;

bool isBadVersion(int version) {
	return version >= badVersion;
}

int firstBadVersion(int n) {
	size_t left = 1;
	size_t right = n;
	int result = -1;

	while (left <= right) {
		int middle = left + ((right - left) / 2);

		if (isBadVersion(middle)) {
			result = middle;
			right = middle - 1;
		} else {
			left = middle + 1;
		}
	}

	return result;
}

} // namespace insoLLLent::LeetCode
