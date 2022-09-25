#pragma once
#include "ISub.hpp"
class IObserver {
 public:
  virtual void notify() = 0;
  virtual void addSub(ISub* sub) = 0;
  virtual void removeSub(ISub* sub) = 0;
  virtual ~IObserver(){};
};