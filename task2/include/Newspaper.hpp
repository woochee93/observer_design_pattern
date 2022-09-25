#include "IObserver.hpp"
#include "ISub.hpp"
#include <vector>
class Newspaper : public IObserver {
private:
  std::vector<ISub *> subscribers{};

public:
  void notify() override final;
  void addSub() override final;
  void removeSub() override final;
  //   virtual ~Newspaper();
  ~Newspaper();
};