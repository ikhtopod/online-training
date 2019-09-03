#include "stdafx.h"

#include "firstBadVersion.h"

using insoLLLent::LeetCode::firstBadVersion;

TEST(LeetCode_firstBadVersion, Case_01) {
	insoLLLent::LeetCode::badVersion = 4;
	EXPECT_EQ(firstBadVersion(5), 4);
}

TEST(LeetCode_firstBadVersion, Case_02) {
	insoLLLent::LeetCode::badVersion = 3;
	EXPECT_EQ(firstBadVersion(9), 3);
}

TEST(LeetCode_firstBadVersion, Case_03) {
	insoLLLent::LeetCode::badVersion = 17;
	EXPECT_EQ(firstBadVersion(20082), 17);
}

TEST(LeetCode_firstBadVersion, Case_04) {
	insoLLLent::LeetCode::badVersion = 10481;
	EXPECT_EQ(firstBadVersion(20082), 10481);
}

TEST(LeetCode_firstBadVersion, MassCases) {
	constexpr int lastVersion = 210;

	for (int badValue = 1; badValue <= lastVersion; ++badValue) {
		insoLLLent::LeetCode::badVersion = badValue;
		EXPECT_EQ(firstBadVersion(lastVersion), badValue);
	}
}
