//
// Created by Reuben Kuhnert on 15/3/13.
//

#include "LitFileInStream.h"

lit::LitFileInStream::LitFileInStream(std::string path) : stream_(path) {

}

lit::LitFileInStream::~LitFileInStream() { stream_.close(); }
