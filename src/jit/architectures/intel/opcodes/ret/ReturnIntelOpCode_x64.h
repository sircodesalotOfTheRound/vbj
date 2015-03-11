#ifndef RETURNINTELOPCODEX64_H
#define RETURNINTELOPCODEX64_H

#include <verbaj.h>

namespace intelx64 {
  class ReturnIntelOpCode_x64 : public IntelOpCodeBase_x64 {
  public:
    virtual void accept(IntelJitBufferWriter_x64 &writer) override;
  };

}

#endif
