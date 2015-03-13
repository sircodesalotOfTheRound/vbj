//
// Created by Reuben Kuhnert on 15/3/13.
//

#ifndef LITFILEINT_H
#define LITFILEINT_H

#include <lit/lit.h>

namespace lit {
  template <class T>
  class LitFileInt {
    T value_;
  public:
    LitFileInt(LitFileInStream& stream) : value_(stream.read_int<T>()) { }
    T value() { return value_; }
  };
}


#endif
