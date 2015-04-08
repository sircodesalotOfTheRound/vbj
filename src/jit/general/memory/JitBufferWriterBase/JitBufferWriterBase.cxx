#include "JitBufferWriterBase.h"

using namespace jit;
using namespace std;

jit::JitBufferWriterBase::JitBufferWriterBase(void* memory, jit::MemoryEndianness endianness) :
  memory_((byte*)memory),
  endianess_(endianness),
  index_(0)
{

}

void JitBufferWriterBase::write_opcode(byte value) {
  memory_[index_++] = value;
}

void JitBufferWriterBase::write_int8(byte value) {
  memory_[index_++] = value;
}

void JitBufferWriterBase::write_int16(uint16_t value) {
  memory_[index_++] = (byte)value;
  memory_[index_++] = (byte)(value >> 8);
}

void JitBufferWriterBase::write_int32(uint32_t value) {
  memory_[index_++] = (byte)value;
  memory_[index_++] = (byte)(value >> 8);
  memory_[index_++] = (byte)(value >> 16);
  memory_[index_++] = (byte)(value >> 24);
}

void JitBufferWriterBase::write_int64(uint64_t value) {
  memory_[index_++] = (byte) value;
  memory_[index_++] = (byte) (value >> 8);
  memory_[index_++] = (byte) (value >> 16);
  memory_[index_++] = (byte) (value >> 24);
  memory_[index_++] = (byte) (value >> 32);
  memory_[index_++] = (byte) (value >> 40);
  memory_[index_++] = (byte) (value >> 48);
  memory_[index_++] = (byte) (value >> 56);
}
