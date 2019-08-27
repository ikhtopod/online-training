#include "stdafx.h"

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return ::testing::UnitTest::GetInstance()->Run();
}
