#ifndef LITFILEHEADER_H
#define LITFILEHEADER_H

#include <runtime/runtime.h>

namespace lit {
  class LitFileInStream;
  class LitFileHeader {
    std::string file_type_;
    runtime::StringTable string_table_;

  public:
    LitFileHeader(lit::LitFileInStream& stream);

    std::string file_type() const;
    runtime::StringTable string_table() const;
  };
}

#endif
