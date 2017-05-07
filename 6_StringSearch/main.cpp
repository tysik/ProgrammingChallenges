#include <iostream>
#include <cstring>

using namespace std;

int countAsterices(const char *str) {
  int asterix_num = 0;
  for (int idx = 0; idx < strlen(str); ++idx) {
    if (str[idx] == '*' && (idx == 0 || str[idx - 1] != '\\')) {
      asterix_num++;
    }
  }

  return asterix_num;
}

//char** splitString(const char *str) {
//  /*
//   * Divide str of length len into separate parts
//   * if * occurs (excluding \*)
//   */
//  int asterix_num = countAsterices(str);

//  // Prepare container for sub strings
//  char **sub_parts = new char*[asterix_num];
//  for (int idx = 0; idx < asterix_num; ++idx)
//    sub_parts[idx] = new char[len];

//  int current_part = 0;
//  int inner_idx = 0;
//  for (int idx = 0; idx < len; ++idx) {
//    // Check for \*
//    if (idx < (len - 1) && str[idx] == '\\' && str[idx + 1] == '*') {
//      sub_parts[current_part][inner_idx] = '*';
//      idx++;
//      inner_idx++;
//      continue;
//    }

//    // Check for *
//    if (str[idx] == '*') {
//      sub_parts[current_part][inner_idx] = '\0';
//      inner_idx = 0;
//      current_part++;
//      continue;
//    }

//    sub_parts[current_part][inner_idx] = str[idx];

//    inner_idx++;
//  }

//  sub_parts[current_part][inner_idx] = '\0';

//  return sub_parts;
//}

bool matchStrings(char*, char*);

bool matchFront(char *base, char *sub) {
  if (sub[0] == '\0') // Sub string finished - everything matches
    return true;
  else if (base[0] == '\0') // Base string finished
    return false;
  else if (sub[0] == '*')
    return matchStrings(base, sub + 1);
  else if (sub[0] == '\\' && sub[1] == '*') {
    if (base[0] == '*')
      return matchFront(base + 1, sub + 2);
    else
      return false;
  }
  else if (sub[0] == base[0])
    return matchFront(base + 1, sub + 1);
  else
    return false;
}

bool matchStrings(char *base, char *sub) {
  int base_len = strlen(base);
  int sub_len = strlen(sub);
  int asterix_num = countAsterices(sub);

  for (int idx = 0; idx <= base_len - sub_len - asterix_num; ++idx) {
    if (matchFront(base + idx, sub)) {
      return true;
    }
  }

  return false;
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    cerr << "Incorrect number of arguments \n";
    cerr << "Usage: \n";
    cerr << "\t 6_StringSearch base_string sub_string" << endl;
    exit(1);
  }

  if (matchStrings(argv[1], argv[2]))
    cout << "Match found" << endl;
  else
    cout << "Match not found" << endl;

  return 0;
}
