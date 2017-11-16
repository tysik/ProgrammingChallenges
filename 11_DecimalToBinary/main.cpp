#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

string decimal_to_binary(unsigned int decimal_number)
{
  string binary_num;

  do
    binary_num.push_back((char)(decimal_number % 2 + 48));
  while ((decimal_number /= 2) > 0);

  reverse(binary_num.begin(), binary_num.end());

  return binary_num;
}

unsigned int binary_to_decimal(string binary_number)
{
  unsigned int decimal_num = 0;

  reverse(binary_number.begin(), binary_number.end());

  int exponent = 0;
  for (char c : binary_number)
    decimal_num += ((int) c - 48) * pow(2, exponent++);

  return decimal_num;
}

int main()
{
  unsigned int N = 34;

  cout << "Binary number: " << decimal_to_binary(N) << endl;
  cout << "Decimal number: " << binary_to_decimal(decimal_to_binary(N)) << endl;
}
