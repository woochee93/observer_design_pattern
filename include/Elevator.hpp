#pragma once
#include <iostream>
#include <vector>
#include "Direction.hpp"
namespace utils {
class Elevator {
  int min_floor{};
  int max_floor{};
  size_t capacity{};
  Direction direction{};
  std::vector<int> request{};
  int current_floor{};
  size_t passengers{};

 public:
  Elevator(int min_f, int max_f, size_t cap);
  int getMinFloor();
  void startElevator();
  void setRequest(std::string a);
  int checkRequest(int floor);
  int isValidRequest(int floor);
  void set_direction(int floor);
  void printVec();
};
}  // namespace utils