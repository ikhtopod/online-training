#include "stdafx.h"

#include "SearchInRotatedSortedArray.h"

using insoLLLent::LeetCode::search;

TEST(LeetCode_search, Case_01) {
	std::vector<int> vec { 0, 1, 2, 4, 5, 6, 7 };
	EXPECT_EQ(search(vec, 0), 0);
	EXPECT_EQ(search(vec, 1), 1);
	EXPECT_EQ(search(vec, 2), 2);
	EXPECT_EQ(search(vec, 3), -1);
	EXPECT_EQ(search(vec, 4), 3);
	EXPECT_EQ(search(vec, 5), 4);
	EXPECT_EQ(search(vec, 6), 5);
	EXPECT_EQ(search(vec, 7), 6);
}

TEST(LeetCode_search, Case_02) {
	std::vector<int> vec { 4, 5, 6, 7, 0, 1, 2 };
	EXPECT_EQ(search(vec, 4), 0);
	EXPECT_EQ(search(vec, 5), 1);
	EXPECT_EQ(search(vec, 6), 2);
	EXPECT_EQ(search(vec, 7), 3);
	EXPECT_EQ(search(vec, 0), 4);
	EXPECT_EQ(search(vec, 1), 5);
	EXPECT_EQ(search(vec, 2), 6);
	EXPECT_EQ(search(vec, 3), -1);
}
