#pragma once
#include <string>
class ISub {
 public:
  virtual void update(const std::string& msg) = 0;
  virtual ~ISub(){};
};