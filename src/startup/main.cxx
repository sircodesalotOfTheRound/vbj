#include <verbaj.h>

using namespace std;

int main() {
  unsigned char memory[4];
  jit::JitBufferWriter writer(memory);
  writer.write_int8('a');
  writer.write_int8('b');
  writer.write_int8('c');
  writer.write_int8(0);

  cout << (char*)writer.memory() << endl;

}
