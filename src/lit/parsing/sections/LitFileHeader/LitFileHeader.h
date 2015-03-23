#ifndef LITFILEHEADER_H
#define LITFILEHEADER_H

namespace lit {
  class LitFileInStream;
  class LitFileHeader {
    std::string file_type_;
  public:
    LitFileHeader(lit::LitFileInStream& stream);

    std::string file_type() const;
  };
}

#endif
