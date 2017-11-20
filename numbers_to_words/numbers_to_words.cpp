#include <iostream>
#include <string>
#include <exception>
#include <cmath>
#include <vector>
#include <algorithm>

// TODO: Check solution at: https://github.com/trodevel/HumanizerCpp

using namespace std;

const unsigned int MAX_NUMBER = 9999;

const string str_digits[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
const string str_teens[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
const string str_tens[] = { "", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };

enum RANKS { ONES, TENS, HUNDREDS, THOUSANDS };

string numberToWords(unsigned int number)
{
  if (number > MAX_NUMBER)
    throw runtime_error("Provided number is too big");

  if (number == 0)
    return string("zero");

  vector<unsigned int> digits;
  do
  {
    digits.push_back(number % 10);
    number /= 10;
  } while (number > 0);

  string result = "";
  size_t rank = digits.size();
  while (rank-->0)
  {
    string temp = " ";

    if (rank == ONES)
      temp += str_digits[digits[rank]];
    else if (rank == TENS)
    {
      if (digits[rank] == 1)
        temp += str_teens[digits[rank-- - 1]];
      else if (digits[rank] > 1)
        temp += str_tens[digits[rank]];
      else
        temp = "";
    }
    else if (rank == HUNDREDS)
    {
      if (digits[rank] > 0)
        temp += str_digits[digits[rank]] + string(" hundred");
      else
        temp = "";

      if ((digits[rank - 1] > 0 || digits[rank - 2] > 0))
          temp += " and";
    }
    else if (rank == THOUSANDS)
    {
      if (digits[rank] > 0)
        temp += str_digits[digits[rank]] + string(" thousand");
    }

    result.append(temp);
  }

  result.erase(0, 1);
  return result;
}

int main()
{
  try
  {
    for (int i = 999; i < 3000; ++i)
      cout << numberToWords(i) << endl;
  }
  catch (const exception& e)
  {
    cout << e.what() << endl;
  }
}
