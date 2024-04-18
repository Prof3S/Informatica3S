#include <iostream>

using namepsace std;

int main(int argc, char** argv) {
  for (int i=0; i<sizeof(argv); i++) {
    cout << "argv["<<i<<"] = " << argv[i] << endl;
  }

  return 0;  
}
