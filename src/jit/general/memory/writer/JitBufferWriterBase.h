#ifndef JITBUFFERWRITERBASE_H
#define JITBUFFERWRITERBASE_H

#include <verbaj.h>

namespace jit {
  enum class Endianness {
    big_endian,
    little_endian
  };

  class JitBufferWriterBase {
    byte* memory_;
    size_t index_;
    Endianness endianess_;

  public:
    JitBufferWriterBase(void* memory, Endianness endianness=Endianness::little_endian);

    void write_opcode(byte value);
    void write_int8(byte value);
    void write_int16(uint16_t value);
    void write_int32(uint32_t value);
    void write_int64(uint64_t value);

    size_t index() const { return index_; }
    void* memory() const { return (void*)memory_; }
    Endianness endianness() { return endianess_; }
  };
}

#endif
