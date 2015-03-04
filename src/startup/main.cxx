#include <iostream>
#include <tools/nomoveorcopy.h>
#include <startup/startup.h>

using namespace std;

int main() {
  tools::NoMove nomove; // Can't be moved.
  tools::NoCopy nocopy; // Can't be copied.
  startup::startup();
}
