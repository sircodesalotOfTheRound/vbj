//
// Created by Reuben Kuhnert on 15/3/13.
//

#include "LitFileInStream.h"

lit::LitFileInStream::LitFileInStream(std::string path) : stream_(path) {

}

lit::LitFileInStream::~LitFileInStream() { stream_.close(); }

std::string lit::LitFileInStream::read_shortstring() {
  ssize_t length = read_int<uint16_t>();
  std::unique_ptr<char> buffer (new char[length + 1]);
  stream_.read((char*)buffer.get(), length);

  // Close the string.
  buffer.get()[length] = 0;

  return std::string(buffer.get());
}