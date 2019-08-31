#include "stdafx.h"

#include "Abbreviation.h"

using insoLLLent::HackerRank::abbreviation;

TEST(HackerRank_abbreviation, Case_01) {
	EXPECT_EQ(abbreviation("a", "A"), "YES");
	EXPECT_EQ(abbreviation("daBcd", "ABC"), "YES");

	EXPECT_EQ(abbreviation("daBcdaBc", "ABC"), "NO");
}

TEST(HackerRank_abbreviation, Case_02) {
	EXPECT_EQ(abbreviation("beFgH", "EFH"), "YES");
	EXPECT_EQ(abbreviation("beFgHa", "EFH"), "YES");
	EXPECT_EQ(abbreviation("beFgHaha", "EFH"), "YES");

	EXPECT_EQ(abbreviation("beFgHaH", "EFH"), "NO");
	EXPECT_EQ(abbreviation("beFgHaHa", "EFH"), "NO");
}

TEST(HackerRank_abbreviation, Case_03) {
	EXPECT_EQ(abbreviation("beEFgH", "EFH"), "YES");
	EXPECT_EQ(abbreviation("beeEefFfghH", "EFH"), "YES");
	EXPECT_EQ(abbreviation("beEfFgh", "EFH"), "YES");
	EXPECT_EQ(abbreviation("beEffgh", "EFH"), "YES");
	EXPECT_EQ(abbreviation("befFgh", "EFH"), "YES");
}

TEST(HackerRank_abbreviation, Case_04) {
	EXPECT_EQ(abbreviation("abeDba", "BDA"), "YES");
	EXPECT_EQ(abbreviation("abBeDba", "BDA"), "YES");
	EXPECT_EQ(abbreviation("abdeDdba", "BDA"), "YES");
	EXPECT_EQ(abbreviation("abaeDaba", "BDA"), "YES");
	EXPECT_EQ(abbreviation("abCeDba", "BDA"), "NO");
}

TEST(HackerRank_abbreviation, Case_05) {
	EXPECT_EQ(abbreviation("bBccC", "BBC"), "YES");
}

TEST(HackerRank_abbreviation, Case_06) {
	EXPECT_EQ(abbreviation("bbcBccC", "BBC"), "YES");
}

TEST(HackerRank_abbreviation, Case_07) {
	EXPECT_EQ(abbreviation("bBCcc", "BBC"), "YES");
}

TEST(HackerRank_abbreviation, Case_08) {
	EXPECT_EQ(abbreviation("bBBccC", "BBCC"), "YES");
}

TEST(HackerRank_abbreviation, Case_09) {
	EXPECT_EQ(abbreviation("BbccC", "BBCC"), "YES");
}

TEST(HackerRank_abbreviation, Case_10) {
	EXPECT_EQ(abbreviation("BbccC", "BBCCC"), "YES");
}

TEST(HackerRank_abbreviation, Case_11) {
	EXPECT_EQ(abbreviation("baBacacaC", "BBCCC"), "BBC");
}

TEST(HackerRank_abbreviation, BigString_YES) {
	EXPECT_EQ(abbreviation("lyylyyllyyylllyylyyylyllylyllllllyyylyllyyyylllllylyylyyllylyylllyhyllllyylllyllylyllylyllllyylylylyyylyllyyylylllyylylllyyllyylylyyllyylyyylllyllylyyllyllllyylylyylllllllyllyyyyyylllyyylylylylyyyyyyyymylyyyylyyyylyyyylyyyylylylylylyllylyylllyllyylylyyllyyyylylllyyyyyllllllyllyylllylyylyllllyyllllylyyyyyllllylylllyyyylyylyyyllyylyyyylylyyyylyyyyylyylllyyllylyyllyllyyyyyylylllylyyyyyllyylyyyyylyyylyylyylylylyyllllyylllyylylllyllyylylyllylllyllyyyyyylyyyllyllyyllyllyylyllyllyyylyyyyylylllyyylllyyyllylyllylylyyllylllylyyyyylyyyylyyyylyyyyylylllllyylyylyyyylyylyyylyylllllllyyyyyyyylyyylylllllylyrlyylllyylylllllylyylyylyyllylyyyyllyyyllylllyllylllylyyyyylylylyyllyyyyylllyyyllllylyllyyyllllyyllyyylllylyylyyyllllyllylllylyllylllyyllllyllyyymyylylllyylllllllyyyyylyyyllyyyyyyylylylyylylyylylyyllyyyllylylyyyylyyyyyyyyyyylllylylllllylllyylllyyllllllyylllllyllyyllyylyyllllyylyylyyllllyyyllllyyylylylylyylyllylllyyylylylylyyylyllllllylyllllyylyllylllyllyylylllylllyllllylyyylylllyyylllyylllllllyllyyy", "LYYLYYLYYYLLLYYLYYYYLLYLLLLLLYYYLYLLYYYYLLLLYLYLYYLLYLYLLYYLLLYYLLLLYLYLLYLYLLLLYYLYLLYYLYLLYLLLLYLYLLYLYYLLYYLLYYLYYYLLLYLYLYYLLYLLYYYLYLLLLLLLYLLYYYYYLLLYYYLYLYLYLYYYYYYYLYYYLYYYYLYYLYYYYLYYLYLYLYLLYLYYLLLYLLYYLYLYLLYYYLYLLLYYYYLLLLLLYLLYYLLLYLYYLYLLLLYLLLYLYYYYYLLLLLYLLLYYYYLYYLYYLLYYLYYYYLYLYYYYLYYYYYLYYLLLYYLLYLYLLYLLYYYYYLYLLYLYYYYYLLYYLYYYYLYYYLYYLYYLYLYLYYLLLLYYLLLYYLYLLLYLLYLYLYLLYLLLYLLYYYYYYLYYYLLYLYYLLYLLYLYLLYLLYYYLYYYYLLLLYYYLLLYYYLLYLYLLYLYLYYLLYLLLYLYYYYYLYYYYLYYYYLYYYYYLYLLLLLYYLYYLYYYLYYYYYLYYLLLLLLLYYYYYYYYLYYLYLLLLYLYLYYLLYYLYLLLLLYLYYLYYLYLLYLYYYLYYYLYLLLYLLYLLYLYYYYYLLYYYLLYYYYYLLYYYLLLLYLYLLYYYLLLLYYLLYYYLLLYLYYLYYYLLLYLLYLYLYLLYLLYYLLLYLLYYYYYLYLLLYYLLLLLLLYYYYYLYYLLYYYYYYLYYLLYYLYLYYLLYYYLLYYLYYYYLYYYYYYYYYYYLLLYYLLLLLYLLLYYLLLYYLLLLLYYLLLLYLYYLLYYLYYLLLYYLYYLYYLLLLYYYLLLLYYYYLYLYLYYYLLYLLLYYYLYLYLYLYYLYLLLLLYLYLLLYYYLLYLYLLYYLYLLYLLLYLLYLYYYLYLLLYYLLYYLLLLLLYLYY"), "YES");
}

TEST(HackerRank_abbreviation, BigString_NO) {
	EXPECT_EQ(abbreviation("abcdefghijklmnopqrstuvwxyzababababAbAbaBabAbababababAbababaBabaBabAbaBababababababababaBababaBababababaBabaBabababABabababAbabababaBAbababababababababababAbababaBabababAbabababababababaBaBabAbabaBababababababababaBAbabaBAbabAbababababaBababAbababababababaBabababababaBaBaBababababAbabaBababaBaBabababababababababababababababababababAbababababababababAbababaBababababababababAbabaBabababaBAbabababababababababababababababaBababAbabababaBAbababababaBabababababababaBaBabababababababAbababababababababAbabababaBabAbabaBabAbAbabAbaBabababababaBaBababABabababababAbaBababababababaBabababababababababababAbababababababababababababababababaBabababababababababababababababAbabaBababababababababababaBAbabababAbababababababababaBabababaBaBabababababababababaBababAbaBababAbababababaBAbababaBababababababAbABabababAbababaBababababababaBaBababababAbAbabababababababababaBababababababababababababababababaBabababAbabAbababababABabababAbabababababababababaBabABCDEFGHIJKLMNOPQRSTUVWXYZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABCDEFGHIJKLMNOPQRSTUVWXYZ"), "NO");
}
