
#include <lit/lit.h>
#include <runtime/runtime.h>

lit::LitFileHeader::LitFileHeader(lit::LitFileInStream& stream) :
  file_type_(stream.read_shortstring()),
  string_table_(stream)
{

}

std::string lit::LitFileHeader::file_type() const {
  return file_type_;
}

runtime::StringTable lit::LitFileHeader::string_table() const {
  return string_table_;
}
