#ifndef JIT_H
#define JIT_H

#include <jit/general/memory/writer/JitBufferWriterBase.h>
#include <jit/general/opcodes/OpCodeBase.h>

// Intel
#include <jit/architectures/intel/memory/IntelJitBufferWriter_x64.h>
#include <jit/architectures/intel/opcodes/base/IntelOpcodeBase_x64.h>

#include <jit/architectures/intel/opcodes/ret/ReturnIntelOpCode_x64.h>

#endif
