#pragma once
#include <iostream>
#include "ISub.hpp"
class Customer : public ISub {
  std::string name{};

 public:
  Customer(const std::string& name_val);
  void update(const std::string& msg) override final;
};