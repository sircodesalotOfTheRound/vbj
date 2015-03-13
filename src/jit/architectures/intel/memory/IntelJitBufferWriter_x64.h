#ifndef INTELJITBUFFERWRITER_H
#define INTELJITBUFFERWRITER_H

namespace jit {
  class JitBufferWriterBase;
}

namespace intelx64 {
  class IntelJitBufferWriter_x64 : public jit::JitBufferWriterBase {
  public:
    IntelJitBufferWriter_x64(void* memory);
  };
}

#endif
