//
// Created by Reuben Kuhnert on 15/3/13.
//

#include "LitFileInStream.h"

lit::LitFileInStream::LitFileInStream(std::ifstream &stream) : stream_(stream) {

}

lit::LitFileInStream::~LitFileInStream() { stream_.close(); }
