#ifndef RETURNINTELOPCODEX64_H
#define RETURNINTELOPCODEX64_H

#include <jit/jit.h>

namespace intelx64 {
  class IntelOpCodeBase_x64;
  class IntelJitBufferWriter_x64;
  class ReturnIntelOpCode_x64 : public IntelOpCodeBase_x64 {
    static const byte RET_OP_CODE = 0xC3;

  public:
    virtual void accept(IntelJitBufferWriter_x64 &writer) override;
  };

}

#endif
