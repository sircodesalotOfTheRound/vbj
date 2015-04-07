#include <jit/jit.h>

using namespace intelx64;

void ReturnIntelOpCode_x64::accept(IntelJitBufferWriter_x64& writer) {
  writer.write_opcode(RET_OP_CODE);
}
