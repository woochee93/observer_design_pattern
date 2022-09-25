#pragma once
#include <memory>
#include "ISub.hpp"
class IObserver {
 public:
  virtual void notify() = 0;
  virtual void addSub(std::shared_ptr<ISub> sub) = 0;
  virtual void removeSub(std::shared_ptr<ISub> sub) = 0;
  virtual ~IObserver(){};
};