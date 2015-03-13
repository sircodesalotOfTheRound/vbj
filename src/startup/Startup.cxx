#include <verbaj.h>
#include <unistd.h>

using namespace std;
using namespace intelx64;

startup::Startup::Startup() {
  lit::LitFileInStream lit_reader("somefile");

  cout << lit_reader.read_int<uint64_t>() << endl;
}
