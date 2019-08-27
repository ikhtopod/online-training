#include "stdafx.h"

#include "almostIncreasingSequence.h"

using insoLLLent::CodeSignal::almostIncreasingSequence;

TEST(CodeSignal_almostIncreasingSequence, StrictSequence) {
	EXPECT_TRUE(almostIncreasingSequence({ 0, 1 }));
	EXPECT_TRUE(almostIncreasingSequence({ 0, 1, 2 }));
	EXPECT_TRUE(almostIncreasingSequence({ 0, 1, 2, 3 }));
	EXPECT_TRUE(almostIncreasingSequence({ 1, 3, 5 }));
	EXPECT_TRUE(almostIncreasingSequence({ -5, 0, 5 }));
}

TEST(CodeSignal_almostIncreasingSequence, SingleNonIncreasingSequenceIsAllowed) {
	EXPECT_TRUE(almostIncreasingSequence({ 1, 1 }));
	EXPECT_TRUE(almostIncreasingSequence({ 0, 1, 0 }));
	EXPECT_TRUE(almostIncreasingSequence({ 1, 0, 1 }));
	EXPECT_TRUE(almostIncreasingSequence({ 1, 0, 1 }));
	EXPECT_TRUE(almostIncreasingSequence({ 0, 1, 3, 2, 4 }));
	EXPECT_TRUE(almostIncreasingSequence({ 0, 1, 2, 3, 2 }));
	EXPECT_TRUE(almostIncreasingSequence({ 4, 0, 1, 2, 3 }));
	EXPECT_TRUE(almostIncreasingSequence({ 10, 9, 10, 11, 12 }));
}
TEST(CodeSignal_almostIncreasingSequence, SeveralIncrementalSequencesAreAcceptable) {
	EXPECT_FALSE(almostIncreasingSequence({ 1, 1, 1 }));
	EXPECT_FALSE(almostIncreasingSequence({ 2, 1, 0 }));
	EXPECT_FALSE(almostIncreasingSequence({ 1, 0, 1, 0 }));
	EXPECT_FALSE(almostIncreasingSequence({ 0, 1, 0, 1 }));
	EXPECT_FALSE(almostIncreasingSequence({ 0, 1, 0, 1, 0 }));
	EXPECT_FALSE(almostIncreasingSequence({ 0, 1, 0, 1, 0, 1 }));
	EXPECT_FALSE(almostIncreasingSequence({ 0, 1, 2, 2, 1, 0 }));
}

TEST(CodeSignal_almostIncreasingSequence, TestsFromCodesignal) {
	EXPECT_FALSE(almostIncreasingSequence({ 1, 3, 2, 1 }));
	EXPECT_TRUE(almostIncreasingSequence({ 1, 3, 2 }));
	EXPECT_FALSE(almostIncreasingSequence({ 1, 2, 1, 2 }));
	EXPECT_FALSE(almostIncreasingSequence({ 3, 6, 5, 8, 10, 20, 15 }));
	EXPECT_FALSE(almostIncreasingSequence({ 1, 1, 2, 3, 4, 4 }));
	EXPECT_FALSE(almostIncreasingSequence({ 1, 4, 10, 4, 2 }));
	EXPECT_TRUE(almostIncreasingSequence({ 10, 1, 2, 3, 4, 5 }));
	EXPECT_FALSE(almostIncreasingSequence({ 1, 1, 1, 2, 3 }));
	EXPECT_TRUE(almostIncreasingSequence({ 0, -2, 5, 6 }));
	EXPECT_FALSE(almostIncreasingSequence({ 1, 2, 3, 4, 5, 3, 5, 6 }));
	EXPECT_FALSE(almostIncreasingSequence({ 40, 50, 60, 10, 20, 30 }));
	EXPECT_TRUE(almostIncreasingSequence({ 1, 1 }));
	EXPECT_FALSE(almostIncreasingSequence({ 1, 2, 5, 5, 5 }));
	EXPECT_FALSE(almostIncreasingSequence({ 10, 1, 2, 3, 4, 5, 6, 1 }));
	EXPECT_TRUE(almostIncreasingSequence({ 1, 2, 3, 4, 3, 6 }));
	EXPECT_TRUE(almostIncreasingSequence({ 123, -17, -5, 1, 2, 3, 12, 43, 45 }));
	EXPECT_TRUE(almostIncreasingSequence({ 3, 5, 67, 98, 3 }));
	EXPECT_TRUE(almostIncreasingSequence({ 1, 2, 3, 4, 99, 5, 6 }));
	EXPECT_TRUE(almostIncreasingSequence({ 1, 2, 5, 3, 5 }));
}
