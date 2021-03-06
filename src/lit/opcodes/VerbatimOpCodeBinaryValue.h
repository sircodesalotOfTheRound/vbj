#ifndef VERBATIMOPCODES_H
#define VERBATIMOPCODES_H

#include <types/types.h>
#include <array>

namespace lit {
  template<size_t size>
  class VerbatimOpCodeBinaryValue {
    std::array<byte, size> values_;

  public:
    VerbatimOpCodeBinaryValue(std::initializer_list<byte> values) : values_(values) { }
  };
}

#endif
