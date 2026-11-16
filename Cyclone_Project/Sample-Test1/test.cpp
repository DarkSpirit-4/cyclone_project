#include "pch.h"
#include "../Cyclone_Library/core.h"

TEST(TestCaseName, TestName) {
	cyclone::Vector3 a = {3, 4, 12};
	EXPECT_EQ(a.magnitude(), 13	);
}

TEST(TestCaseName1, TestName1) {
	cyclone::Vector3 vector = { 0, 3, 4 };
	vector.normalise();

	EXPECT_EQ(vector.x, 0);
	EXPECT_EQ(vector.y, 0.6);
	EXPECT_EQ(vector.z, 0.8);
}