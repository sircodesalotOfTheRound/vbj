#include <verbaj.h>
#include <fstream>
#include <unistd.h>

using namespace std;
using namespace intelx64;

startup::Startup::Startup() {
  ifstream stream ("somefile");
  lit::LitFileInStream lit_reader(stream);

  cout << lit_reader.read_int<uint64_t>() << endl;

  stream.close();
}
