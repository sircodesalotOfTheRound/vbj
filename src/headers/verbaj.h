#ifndef VERBAJ_H
#define VERBAJ_H

// On Windows
#ifdef _WIN64
  #include <Windows.h>
#endif

// Std Library
#include <iostream>
#include <vector>

// Tools
#include <tools/nomoveorcopy.h>
#include <types/types.h>

// Startup
#include <startup/Startup.h>

// General Types
#include <jit/general/memory/writer/JitBufferWriterBase.h>
#include <jit/general/opcodes/OpCodeBase.h>

// Intel
#include <jit/architectures/intel/memory/IntelJitBufferWriter_x64.h>
#include <jit/architectures/intel/opcodes/base/IntelOpcodeBase_x64.h>
#include <jit/architectures/intel/opcodes/base/IntelOpCodeValues_x64.h>

#include <jit/architectures/intel/opcodes/ret/ReturnIntelOpCode_x64.h>

#endif