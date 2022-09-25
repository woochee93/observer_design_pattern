#include <iostream>
#include "include/Customer.hpp"
#include "include/Newspaper.hpp"

int main() {
   ISub* customer1= new Customer{"1.Jack"};
   ISub* customer2= new Customer{"2.John"};
   ISub* customer3= new Customer{"3.Mat"};
   ISub* customer4= new Customer{"4.Joffrey"};
   Newspaper playboy{};
   playboy.addSub(customer1);
   playboy.addSub(customer2);
   playboy.addSub(customer3);
   playboy.addSub(customer4);
   playboy.realese("First one");
   playboy.removeSub(customer1);
   std::cout<<"************************"<<std::endl;
   playboy.realese("Always The Second");
   return 0;
}
