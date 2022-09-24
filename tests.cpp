#include <iostream>
#include "gtest/gtest.h"
#include "./include/Elevator.hpp"

TEST(Elevator, tryInitElevator)
{
  size_t one = 1;
  utils::Elevator e{1, 1, one};
  EXPECT_EQ(e.getMinFloor(), one);
}