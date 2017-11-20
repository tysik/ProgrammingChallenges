#include <iostream>
#include <string>

using namespace std;

int count = 0;

void findPermutations(const string prefix, string str) {
  if (str.length() == 0) {
    count++;
    cout << prefix << endl;
    return;
  }

  for (int idx = 0; idx < str.length(); ++idx) {
    string new_prefix(prefix);
    string new_str(str);

    new_prefix.push_back(str[idx]);
    new_str.erase(idx, 1);

    findPermutations(new_prefix, new_str);
  }
}

void findPermutations(string str) {
  findPermutations("", str);
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    cerr << "Incorrect number of arguments \n";
    cerr << "Usage: \n";
    cerr << "\t 4_string_permutations string" << endl;
    exit(1);
  }

  string base_string(argv[1]);

  findPermutations(base_string);

  cout << "Found " << count << " permutations!" << endl;

  return 0;
}
