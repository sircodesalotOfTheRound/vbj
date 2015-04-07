#include <verbaj.h>

using namespace intelx64;
using namespace jit;

IntelJitBufferWriter_x64::IntelJitBufferWriter_x64(void* memory)
  : JitBufferWriterBase(memory, jit::Endianness::little_endian)
{

}
