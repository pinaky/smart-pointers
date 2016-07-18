#pragma once
#include <memory>
#include <iostream>

namespace getsmart
{
  class Catcher
  {
    private:
      std::unique_ptr<Pitcher> p;
    public:
      Catcher(std::unique_ptr<Pitcher> x) { this->p = std::move(x); }
      void Print(std::ostream &os) { os << *p; }
  };
}
