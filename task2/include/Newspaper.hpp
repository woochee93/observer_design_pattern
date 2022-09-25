#include <algorithm>
#include <vector>
#include "IObserver.hpp"
#include "ISub.hpp"
class Newspaper : public IObserver {
 private:
  std::string title{};
  std::vector<ISub*> subscribers{};

 public:
  void notify() override final;
  void addSub(ISub* sub) override final;
  void removeSub(ISub* sub) override final;
  void realese(const std::string& m_title);
  //   virtual ~Newspaper();
  ~Newspaper();
};