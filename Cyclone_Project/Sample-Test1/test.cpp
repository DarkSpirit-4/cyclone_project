#include "pch.h"
#include "../Cyclone_Library/core.h"
#include "../Cyclone_Library/particle.h"

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

TEST(TestCaseName2, TestName2	) {
	cyclone::Vector3 vector2_1 = { 1, 2, 3 };
	cyclone::Vector3 vector2_2 = { -2, 5, 4 };
	EXPECT_EQ(vector2_1.scalarProduct(vector2_2), 20);
}

TEST(TestCaseName3, TestName3) {
	cyclone::Vector3 vector3_1 = { 1, 2, 3 };
	cyclone::Vector3 vector3_2 = { 2, -1, 4 };
	vector3_1.addScaledVector(vector3_2, 0.5);

	EXPECT_EQ(vector3_1.x, 2);
	EXPECT_EQ(vector3_1.y, 1.5);
	EXPECT_EQ(vector3_1.z, 5);
}




