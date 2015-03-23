//
// Created by Reuben Kuhnert on 15/3/23.
//

#include "StringTable.h"
#include <lit/lit.h>
#include <iostream>

using namespace std;

runtime::StringTable::StringTable(lit::LitFileInStream &stream) {
  ssize_t length = stream.read_int<uint32_t>();
  for (ssize_t index = 0; index < length; index++) {
    std::string entry = stream.read_shortstring();
    entries_.push_back(entry);

    cout << entry << endl;
  }
}
