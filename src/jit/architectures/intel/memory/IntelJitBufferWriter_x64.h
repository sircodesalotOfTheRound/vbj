#ifndef INTELJITBUFFERWRITER_H
#define INTELJITBUFFERWRITER_H

#include <verbaj.h>

namespace intelx64 {
  class IntelJitBufferWriter_x64 : public jit::JitBufferWriterBase {
  public:
    IntelJitBufferWriter_x64(void* memory);
  };
}

#endif
