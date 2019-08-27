#include "stdafx.h"

#include "countSmileys.h"

using insoLLLent::CodeWars::countSmileys;

TEST(CodeWars_countSmileys, CorrectValue) {
	EXPECT_EQ(countSmileys({ ";]", ":[", ";*", ":$", ":-/" }), 0);
	EXPECT_EQ(countSmileys({ ";]", ":[", ";*", ":$", ";-D" }), 1);
	EXPECT_EQ(countSmileys({ ":)", ";(", ";}", ":-D" }), 2);
	EXPECT_EQ(countSmileys({ ";D", ":-(", ":-)", ";~)" }), 3);
}
