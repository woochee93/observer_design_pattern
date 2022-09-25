#pragma once
#include "IObserver.hpp"
#include "ISub.hpp"
#include <algorithm>
#include <vector>
class Newspaper : public IObserver {
private:
  std::string title{};
  std::vector<ISub *> subscribers{};

public:
  void notify() override final;
  void addSub(ISub *sub) override final;
  void removeSub(ISub *sub) override final;
  void realese(const std::string &m_title);
  ~Newspaper() = default;
};