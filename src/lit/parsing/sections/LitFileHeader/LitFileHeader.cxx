
#include <lit/lit.h>

lit::LitFileHeader::LitFileHeader(lit::LitFileInStream& stream) :
  file_type_(stream.read_shortstring())
{

}

std::string lit::LitFileHeader::file_type() const {
  return file_type_;
}