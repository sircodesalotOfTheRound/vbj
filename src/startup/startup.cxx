#include <verbaj.h>

using namespace std;
using namespace intelx64;

startup::Startup::Startup() {
  void* memory = new int[100];
  intelx64::IntelJitBufferWriter_x64 writer(memory);
  intelx64::ReturnIntelOpCode_x64 ret;

  ret.accept(writer);


}
