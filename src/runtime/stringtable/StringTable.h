//
// Created by Reuben Kuhnert on 15/3/23.
//

#ifndef STRINGTABLE_H
#define STRINGTABLE_H

#include <string>
#include <vector>
namespace lit {
  class LitFileInStream;
}

namespace runtime {
  class StringTable {
    std::vector<std::string> entries_;

  public:
    StringTable(lit::LitFileInStream& stream);
  };
}


#endif
