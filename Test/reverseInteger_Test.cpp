#include "stdafx.h"

#include "reverseInteger.h"

using insoLLLent::HackerRank::reverse;

TEST(HackerRank_reverse, CorrectValue) {
	EXPECT_EQ(reverse(0), 0);
	EXPECT_EQ(reverse(1), 1);
	EXPECT_EQ(reverse(-1), -1);
	EXPECT_EQ(reverse(10), 1);
	EXPECT_EQ(reverse(11), 11);
	EXPECT_EQ(reverse(12), 21);
	EXPECT_EQ(reverse(-10), -1);
	EXPECT_EQ(reverse(-11), -11);
	EXPECT_EQ(reverse(-12), -21);
	EXPECT_EQ(reverse(123), 321);
	EXPECT_EQ(reverse(-123), -321);
	EXPECT_EQ(reverse(1'674'984), 489'476'1);
	EXPECT_EQ(reverse(-1'534'236'469), 0);
	EXPECT_EQ(reverse(-999'999'999), -999'999'999);
	EXPECT_EQ(reverse(1'999'999'991), 1'999'999'991);
	EXPECT_EQ(reverse(1'563'847'412), 0);
	EXPECT_EQ(reverse(std::numeric_limits<int>::min()), 0);
	EXPECT_EQ(reverse(std::numeric_limits<int>::max()), 0);
}
