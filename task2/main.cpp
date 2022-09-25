#include <iostream>
#include <memory>
#include "include/Customer.hpp"
#include "include/Newspaper.hpp"

int main() {
  std::shared_ptr<ISub> customer1 = std::make_shared<Customer>("1.Jack");
  std::shared_ptr<ISub> customer2 = std::make_shared<Customer>("2.John");
  std::shared_ptr<ISub> customer3 = std::make_shared<Customer>("3.Mat");
  std::shared_ptr<ISub> customer4 = std::make_shared<Customer>("4.Joff");
  Newspaper playboy{};
  playboy.addSub(customer1);
  playboy.addSub(customer2);
  playboy.addSub(customer3);
  playboy.addSub(customer4);
  playboy.realese("First one");
  playboy.removeSub(customer1);
  std::cout << "************************" << std::endl;
  playboy.realese("Always The Second");
  return 0;
}
//-fsanitize=address