#include "JitBufferWriter.h"

using namespace jit;
using namespace std;

jit::JitBufferWriter::JitBufferWriter(void* memory, Endianness endianness) :
  memory_((byte*)memory),
  endianess_(endianness),
  index_(0)
{

}

void JitBufferWriter::write_int8(byte value) {
  memory_[index_++] = value;
}

void JitBufferWriter::write_int16(uint16_t value) {
  memory_[index_++] = (byte)value;
  memory_[index_++] = (byte)(value >> 8);
}

void JitBufferWriter::write_int32(uint32_t value) {
  memory_[index_++] = (byte)value;
  memory_[index_++] = (byte)(value >> 8);
  memory_[index_++] = (byte)(value >> 16);
  memory_[index_++] = (byte)(value >> 24);
}

void JitBufferWriter::write_int64(uint64_t value) {
  memory_[index_++] = (byte) value;
  memory_[index_++] = (byte) (value >> 8);
  memory_[index_++] = (byte) (value >> 16);
  memory_[index_++] = (byte) (value >> 24);
  memory_[index_++] = (byte) (value >> 32);
  memory_[index_++] = (byte) (value >> 40);
  memory_[index_++] = (byte) (value >> 48);
  memory_[index_++] = (byte) (value >> 56);
}
