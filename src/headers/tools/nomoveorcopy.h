#ifndef NOMOVEORCOPY_H
#define NOMOVEORCOPY_H

#include <verbaj.h>

namespace tools {
  // Disable moving
  class NoMove {
  public:
    NoMove() = default;
  private:
    NoMove(const NoMove&) = delete;
    NoMove& operator=(const NoMove&) = delete;
  };

  // Disable copying
  class NoCopy {
  public:
    NoCopy() = default;
  private:
    NoCopy(NoCopy&&) = delete;
    NoCopy& operator=(NoCopy&&) = delete;
  };

  class NoMoveOrCopy : private NoMove, private NoCopy {

  };
}

#endif
