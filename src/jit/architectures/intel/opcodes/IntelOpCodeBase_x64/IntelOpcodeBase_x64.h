#ifndef INTELOPCODEBASEX64_H
#define INTELOPCODEBASEX64_H

#include <jit/jit.h>

namespace intelx64 {
  class IntelJitBufferWriter_x64;
  class IntelOpCodeBase_x64 : public jit::OpCodeBase<intelx64::IntelJitBufferWriter_x64> {

  };
}

#endif
