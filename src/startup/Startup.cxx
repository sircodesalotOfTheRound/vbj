#include <verbaj.h>
#include <unistd.h>

using namespace std;

startup::Startup::Startup() {
  lit::LitFileInStream lit_reader("somefile");
  lit::LitFileInt<uint64_t> int64 (lit_reader);

  cout << int64.value() << endl;
}
