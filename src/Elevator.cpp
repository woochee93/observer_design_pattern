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

int utils::Elevator::isValidRequest(int floor) {
  int floorToCheck = checkRequest(floor);

  if (floorToCheck == 1) {
    std::cout << "Elevator is going UP" << std::endl;
  }
  if (floorToCheck == 2) {
    std::cout << "Elevator is going DOWN" << std::endl;
  }
  if (floorToCheck == 3) {
    std::cout << "This floor does not exist" << std::endl;
  }
  return floorToCheck;
}

void utils::Elevator::set_direction(int floor) {
  // int floorNumber = isValidRequest(floor);
  // if(passengers == 0 && floorNumber == 0 ){
  if (current_floor > floor) {
    direction = Direction::DOWN;
  } else {
    direction = Direction::UP;
  }
  //}
}