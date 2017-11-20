#include <iostream>
#include <cmath>

using namespace std;

unsigned long long factorial(unsigned long long n) {
  // Simply
  unsigned long long result = 1;
  while (n > 1) {
    result *= n;
    n--;
  }

//  // Or recursively
//  if (n <= 0)
//    return 1;

//  return n * factorial(n - 1);

  return result;
}

string printFactorial(unsigned int n) {
  string result = to_string(1);

  int i = 2;
  while (i <= n) {
    result += "x" + to_string(i);
    ++i;
  }

  return result;
}

unsigned int findTrailingZeros(unsigned int n) {
  int exponent = 1;
  int count = 0;

  while (n >= pow(5, exponent)) {
    count += n / static_cast<int>(pow(5, exponent));
    exponent++;
  }

  return count;
}

int main(int argc, char *argv[]) {
  cout << "Please provide a natural number: ";
  unsigned long long number;
  cin >> number;

  cout << number << "! = " << printFactorial(number) << " = " << factorial(number) << endl;
  cout << "Trailing zeros: " << findTrailingZeros(number) << endl;

  return 0;
}
