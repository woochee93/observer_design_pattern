#include "../include/Elevator.hpp"

      utils::Elevator::Elevator(int min_f, int max_f, size_t cap) : min_floor{min_f}, max_floor{max_f}, capacity{cap} {};
      int utils::Elevator::getMinFloor() {
         return this->min_floor;
      }
