#include <verbaj.h>

using namespace intelx64;

void ReturnIntelOpCode_x64::accept(IntelJitBufferWriter_x64& writer) {
  writer.write_opcode(IntelOpCodes_x64::RET);
}
