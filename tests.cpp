#include "./include/Elevator.hpp"
#include "gtest/gtest.h"
#include <iostream>

TEST(Elevator, printVec) {
  size_t one = 1;
  utils::Elevator e{0, 10, 10};
  e.setRequest("1 2 3 4 5 6 11");
  e.printVec();
  // EXPECT_EQ(e, 1);
}
TEST(Elevator, elevGoUpAndPassangerWantGoDownReturnOne) {
  size_t one = 1;
  utils::Elevator e{1, 1, 5};
  EXPECT_EQ(e.checkRequest(3), 0);
}
TEST(Elevator, tryInitElevator) {
  size_t one = 1;
  utils::Elevator e{1, 1, one};
  EXPECT_EQ(e.getMinFloor(), one);
}