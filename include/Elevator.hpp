#pragma once
#include <iostream>
namespace utils
{
   class Elevator
   {
      int min_floor;
      int max_floor;
      size_t capacity;

   public:
      Elevator(int min_f, int max_f, size_t cap);
      int getMinFloor();
   };
}