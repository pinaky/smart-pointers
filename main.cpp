#include <iostream>
#include "pitcher.h"
#include "catcher.h"

int main()
{
  std::unique_ptr<getsmart::Pitcher> p(new getsmart::Pitcher(5.0));
  std::unique_ptr<getsmart::Catcher> c(new getsmart::Catcher(std::move(p)));
  c->Print(std::cout);

  return 0;
}
