#pragma once
#include "ISub.hpp"
#include <iostream>
class Customer : ISub {
  std::string name{};

public:
  Customer(const std::string &name_val);
  void update(const std::string &msg) override final;
};