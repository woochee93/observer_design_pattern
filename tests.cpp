#include <iostream>
#include "./include/Elevator.hpp"
#include "gtest/gtest.h"

TEST(Elevator, elevGoUpAndPassangerWantGoDownReturnOne) {
  size_t one = 1;
  utils::Elevator e{1, 1, one};
  EXPECT_EQ(e.checkRequest(3), 1);
}
TEST(Elevator, tryInitElevator) {
  size_t one = 1;
  utils::Elevator e{1, 1, one};
  EXPECT_EQ(e.getMinFloor(), one);
}