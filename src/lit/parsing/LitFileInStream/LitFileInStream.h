//
// Created by Reuben Kuhnert on 15/3/13.
//

#ifndef LITFILEINSTREAM_H
#define LITFILEINSTREAM_H

#include <fstream>
#include <types/types.h>
#include <headers/tools/nomoveorcopy.h>

namespace lit {
  class LitFileInStream : tools::NoMoveOrCopy {
    std::ifstream stream_;

  public:
    LitFileInStream(std::string path);
    ~LitFileInStream();

    template<class T>
    T read_int() {
      T value;
      stream_.read((char*)&value, sizeof(T));
      return value;
    }
  };
}




#endif
