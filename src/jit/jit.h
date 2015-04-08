#ifndef JIT_H
#define JIT_H

#include <types/types.h>

#include <jit/general/memory/MemoryEndianness/MemoryEndianness.h>
#include <jit/general/memory/JitBufferWriterBase/JitBufferWriterBase.h>
#include <jit/general/opcodes/OpCodeBase.h>

// Intel
#include <jit/architectures/intel/memory/IntelJitBufferWriter_x64/IntelJitBufferWriter_x64.h>
#include <jit/architectures/intel/opcodes/IntelOpCodeBase_x64/IntelOpcodeBase_x64.h>

#include <jit/architectures/intel/opcodes/ReturnIntelOpCode_x64/ReturnIntelOpCode_x64.h>

#endif
