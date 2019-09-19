#include "findPeakElement.h"

namespace insoLLLent::LeetCode {

size_t findPeakElement(const std::vector<int>& nums, size_t left, size_t right) {
	if (right - left == 0) return left;
	if (right - left == 1) {
		return nums[right] > nums[left] ? right : left;
	}

	size_t middle = left + (right - left) / 2;

	if (nums[middle] >= nums[middle - 1] &&
		nums[middle] >= nums[middle + 1]) {
		return middle;
	}

	if (nums[middle] < nums[middle - 1]) {
		return findPeakElement(nums, left, middle - 1);
	}

	return findPeakElement(nums, middle + 1, right);
}

size_t findPeakElement(const std::vector<int>& nums) {
	return findPeakElement(nums, 0, nums.size() - 1);
}

} // namespace insoLLLent::LeetCode
