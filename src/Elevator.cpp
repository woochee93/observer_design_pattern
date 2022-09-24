#include "../include/Elevator.hpp"

utils::Elevator::Elevator(int min_f, int max_f, size_t cap)
    : min_floor{min_f}, max_floor{max_f}, capacity{cap} {};
int utils::Elevator::getMinFloor() {
  return this->min_floor;
}

void utils::Elevator::startElevator(){
    // setRequest();
};

void utils::Elevator::setRequest(std::string a) {
  if (passengers == capacity)
    return;
  std::string dest_floors_str{a};
  // std::cout << "Please insert floor: " << std::endl;
  // std::cin >> dest_floors_str;

  if (dest_floors_str == "")
    return;
  for (auto cFloor : dest_floors_str) {
    if (passengers >= capacity)
      return;
    if (cFloor == ' ') {
      continue;
    }
    int floor = cFloor - '0';
    bool isValid = this->isValidRequest(floor) == 0;
    if (isValid) {
      request.push_back(floor);
      passengers++;
    }
  }

  std::string dest_floor_str{};
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

void utils::Elevator::printVec() {
  for (auto x : request) {
    std::cout << x << " ";
  }
}