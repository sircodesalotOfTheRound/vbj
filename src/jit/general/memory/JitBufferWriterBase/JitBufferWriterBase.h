#ifndef JITBUFFERWRITERBASE_H
#define JITBUFFERWRITERBASE_H

#include <types/types.h>
#include <jit/general/memory/MemoryEndianness/MemoryEndianness.h>

namespace jit {
  enum class MemoryEndianness;
  class JitBufferWriterBase {
    byte* memory_;
    size_t index_;
    MemoryEndianness endianess_;

  public:
    JitBufferWriterBase(void* memory, MemoryEndianness endianness=MemoryEndianness::little_endian);

    void write_opcode(byte value);
    void write_int8(byte value);
    void write_int16(uint16_t value);
    void write_int32(uint32_t value);
    void write_int64(uint64_t value);

    size_t index() const { return index_; }
    void* memory() const { return (void*)memory_; }
    MemoryEndianness endianness() { return endianess_; }
  };
}

#endif
