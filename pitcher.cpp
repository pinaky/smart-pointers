#include "pitcher.h"

namespace getsmart
{
  std::ostream& operator<<(std::ostream& os, Pitcher const &p)
  {
    os << p.x << std::endl;
    return os;
  }
}

