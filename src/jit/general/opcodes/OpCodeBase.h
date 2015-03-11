#ifndef OPCODEBASE_H
#define OPCODEBASE_H

namespace jit {
  template<class TJitBufferWriter>
  class OpCodeBase {
  public:
    virtual void accept(TJitBufferWriter& writer) = 0;
  };
};

#endif
