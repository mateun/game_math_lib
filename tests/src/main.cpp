#include <stdio.h>
#include <gtest\gtest.h>
#include <game_math.h>


TEST(RayIntersection, intersectPlane) {
	bool res = rayIntersectPlane();
	ASSERT_TRUE(res);
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}