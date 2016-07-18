#pragma once
#include <iostream>

namespace getsmart
{
  class Pitcher
  {
    private:
      int x;
    public:
      Pitcher() { this->x = 0.0; }
      Pitcher(int x) { this->x = x; }
      friend std::ostream & operator<<(std::ostream &, Pitcher const &);
  };

}

