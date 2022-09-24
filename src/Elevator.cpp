#include "../include/Elevator.hpp"

utils::Elevator::Elevator(int min_f, int max_f, size_t cap)
    : min_floor{min_f}, max_floor{max_f}, capacity{cap} {};
int utils::Elevator::getMinFloor() {
  return this->min_floor;
}

void utils::Elevator::startElevator() {
  setRequest();
};

void utils::Elevator::setRequest() {
  std::string dest_floor_str{};
  std::string dest_floors_str{};
};

int utils::Elevator::checkRequest(int floor) {
  if (floor > max_floor || floor < min_floor) {
    return 3;
  }
  if (floor < current_floor && direction == Direction::UP) {
    return 1;
  }
  if (floor > current_floor && direction == Direction::DOWN) {
    return 2;
  }

  return 0;
};
