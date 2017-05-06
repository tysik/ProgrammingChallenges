#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cerr << "Usage example: 2_LineCount filename.txt" << endl;
    exit(1);
  }

//  string filename(argv[1]);
//  cout << "File name is: " << filename << endl;

  ifstream file(argv[1]);
  if (!file) {
    cerr << "Error while opening file " << argv[1] << " for reading." << endl;
    exit(1);
  }

  int count = 0;
  while (file) {
    string dummy;
    getline(file, dummy);
    count++;
  }
  count--;

  cout << "Number of lines: " << count << endl;

  return count;
}
