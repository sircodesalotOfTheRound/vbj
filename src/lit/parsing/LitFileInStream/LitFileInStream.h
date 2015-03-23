//
// Created by Reuben Kuhnert on 15/3/13.
//

#ifndef LITFILEINSTREAM_H
#define LITFILEINSTREAM_H

#include <fstream>
#include <memory>
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

    std::string read_shortstring() {
      ssize_t length = read_int<uint16_t>();
      std::unique_ptr<char> buffer (new char[length + 1]);
      stream_.read((char*)buffer.get(), length);

      // Close the string.
      buffer.get()[length] = 0;

      return std::string(buffer.get());
    }
  };
}




#endif
