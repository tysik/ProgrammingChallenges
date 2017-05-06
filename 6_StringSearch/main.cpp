#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {
//  if (argc != 3) {
//    cerr << "Incorrect number of arguments \n";
//    cerr << "Usage: \n";
//    cerr << "\t 6_StringSearch base_string sub_string" << endl;
//    exit(1);
//  }

//  char* base_string = argv[1];
//  char* sub_string = argv[2];

  char* base_string = "qwerty";
  char* sub_string = "qw";

  int base_len = strlen(base_string);
  int sub_len = strlen(sub_string);

//  // Count the number of *
//  int asterix_num = 0;
//  for (int idx = 0; idx < sub_string.length(); ++idx) {
//    if (sub_string[idx] == '*')
//      ++asterix_num;
//  }

//  // Divide sub_string into separate parts if * occurs
//  string sub_parts[asterix_num];
//  int begin_next_idx = end_idx = 0;

//  for (int idx = 0; idx < sub_string.length(); ++idx) {
//    if (sub_string[idx] == '*') {
//      end_idx = idx;
//      begin_next_idx = idx + 1;


//    }
//  }

  bool substring_found = false;

  for (int idx = 0; idx <= base_len - sub_len; ++idx) {
    for (int jdx = 0; jdx < sub_len; ++jdx) {
      if (sub_string[jdx] == base_string[idx + jdx]) {
        substring_found = true;

        if (jdx == sub_len - 1) {
          cout << boolalpha << "Substring found: " << substring_found << "." << endl;
          return 0;
        }
        else
          continue;
      }
      else {
        substring_found = false;
        break;
      }
    }
  }



  return 0;
}
