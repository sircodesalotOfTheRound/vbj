#include <jit/jit.h>
#include "IntelJitBufferWriter_x64.h"

using namespace intelx64;
using namespace jit;

IntelJitBufferWriter_x64::IntelJitBufferWriter_x64(void* memory)
  : JitBufferWriterBase(memory, jit::MemoryEndianness::little_endian)
{

}
