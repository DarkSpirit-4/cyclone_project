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

TEST(TestParticle, TestPos) {
	cyclone::Particle particle;

	particle.setMass(1.0f);
	particle.setPosition(0, 0, 0);
	particle.setVelocity(2, 0, 0);
	particle.setAcceleration(0, 0, 0);
	particle.setDamping(1);
	particle.integrate(0.5);
	cyclone::Vector3 position = particle.getPosition();
	cyclone::Vector3 velocity = particle.getVelocity();

	EXPECT_EQ(position.x, 1.0f);
	EXPECT_EQ(position.y, 0.0f);
	EXPECT_EQ(position.z, 0.0f);

	EXPECT_EQ(velocity.x, 2.0f);
	EXPECT_EQ(velocity.y, 0.0f);
	EXPECT_EQ(velocity.z, 0.0f);
}

TEST(TestParticle1, TestAcc) {
	cyclone::Particle particle;

	particle.setMass(1.0);
	particle.setPosition(0, 0, 0);
	particle.setVelocity(2, 0, 0);
	particle.setAcceleration(0, -10, 0);
	particle.setDamping(1);
	particle.integrate(0.5);
	cyclone::Vector3 position = particle.getPosition();
	cyclone::Vector3 velocity = particle.getVelocity();

	EXPECT_EQ(velocity.x, 2.0f);
	EXPECT_EQ(velocity.y, -5.0f);
	EXPECT_EQ(velocity.z, 0.0f);
}