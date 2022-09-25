#pragma once

class IObserver {
public:
  virtual void notify() = 0;
  virtual void addSub() = 0;
  virtual void removeSub() = 0;
  virtual ~IObserver(){};
};