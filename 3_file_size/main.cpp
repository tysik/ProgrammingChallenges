#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cerr << "Incorrect number of arguments \n";
    cerr << "Usage: \n";
    cerr << "\t 3_file_size filename.txt" << endl;
    exit(1);
  }

  ifstream file(argv[1]);
  if (!file) {
    cerr << "Error while opening file " << argv[1] << "." << endl;
    exit(1);
  }

//  // Simply
//  int count = 0;
//  while (file) {
//    char dummy;
//    if (file.get(dummy))
//      count++;
//  }

  // Alternatively:
  int count;
  long begin, end;
  file.seekg(0, ios::beg);
  begin = file.tellg();
  file.seekg(0, ios::end);
  end = file.tellg();
  count = end - begin;

  cout << "Number of bytes: " << count << "." << endl;

  return count;
}
