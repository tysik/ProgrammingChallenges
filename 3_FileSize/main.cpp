#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cerr << "Incorrect number of arguments \n";
    cerr << "Usage: \n";
    cerr << "\t 3_FileSize filename.txt" << endl;
    exit(1);
  }

  ifstream file(argv[1]);
  if (!file) {
    cerr << "Error while opening file " << argv[1] << "." << endl;
    exit(1);
  }

  int count = 0;
  while (file) {
    char dummy;
    if (file.get(dummy))
      count++;
  }

  cout << "Number of bytes: " << count << "." << endl;

  return count;
}
