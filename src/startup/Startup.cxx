#include <verbaj.h>

using namespace std;

startup::Startup::Startup() {
  std::string path = "/Users/sircodesalot/IdeaProjects/Verba/verba_builds/single-source-build.vlit";
  lit::LitFileInStream lit_reader(path);
  lit::LitFileHeader header(lit_reader);

  cout << header.file_type() << endl;
}
