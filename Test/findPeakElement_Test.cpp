#include "stdafx.h"

#include <vector>
#include <set>
#include <algorithm>

#include "findPeakElement.h"

using insoLLLent::LeetCode::findPeakElement;

TEST(LeetCode_findPeakElement, Case_01) {
	const std::vector<int> vec { 1 };
	EXPECT_EQ(findPeakElement(vec), 0);
}

TEST(LeetCode_findPeakElement, Case_02) {
	const std::vector<int> vec { 1, 0 };
	EXPECT_EQ(findPeakElement(vec), 0);
}

TEST(LeetCode_findPeakElement, Case_03) {
	const std::vector<int> vec { 0, 1 };
	EXPECT_EQ(findPeakElement(vec), 1);
}

TEST(LeetCode_findPeakElement, Case_04) {
	const std::vector<int> vec { 0, 1, 0 };
	EXPECT_EQ(findPeakElement(vec), 1);
}

TEST(LeetCode_findPeakElement, Case_05) {
	const std::vector<int> vec { 2, 1, 0 };
	EXPECT_EQ(findPeakElement(vec), 0);
}

TEST(LeetCode_findPeakElement, Case_06) {
	const std::vector<int> vec { 0, 1, 2 };
	EXPECT_NE(findPeakElement(vec), 0);
	EXPECT_NE(findPeakElement(vec), 1);
	EXPECT_EQ(findPeakElement(vec), 2);
}

TEST(LeetCode_findPeakElement, Case_07) {
	const std::vector<int> vec { 1, 0, 1 };
	const std::set<size_t> res { 0, 2 };
	EXPECT_TRUE(res.count(findPeakElement(vec)));
}

TEST(LeetCode_findPeakElement, Case_08) {
	const std::vector<int> vec { 1, 2, 1, 3, 5, 6, 4 };
	const std::set<size_t> res { 1, 5 };
	EXPECT_TRUE(res.count(findPeakElement(vec)));
}
