#include "../include/Customer.hpp"

void Customer::update(const std::string &msg) {
  std::cout << "Customer " << name << " received new newspapper. Title: " << msg
            << std::endl;
};
Customer::Customer(const std::string &name_val) : name(name_val){};
