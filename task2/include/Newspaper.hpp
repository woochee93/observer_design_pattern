#pragma once
#include <algorithm>
#include <vector>
#include "IObserver.hpp"
#include "ISub.hpp"
class Newspaper : public IObserver {
 private:
  std::string title{};
  std::vector<std::shared_ptr<ISub>> subscribers{};

 public:
  void notify() override final;
  void addSub(std::shared_ptr<ISub> sub) override final;
  void removeSub(std::shared_ptr<ISub> sub) override final;
  void realese(const std::string& m_title);
  ~Newspaper() = default;
};