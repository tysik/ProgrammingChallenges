#include <iostream>
#include <string>

using namespace std;

void append_n(string &s, const char* c, size_t n)
{
  while (n-->0)
  {
    s.append(c);
  }
}

string convert_to_roman(const int number)
{
  string roman_number;
  int ones, tens, hundreds, thousands;

  ones = (number / 1) % 10;
  tens = (number / 10) % 10;
  hundreds = (number / 100) % 10;
  thousands = (number / 1000) % 10;

  cout << "Number " << number << " has digits: " << thousands << " " << hundreds << " " << tens << " " << ones << endl;

  if (thousands > 0)
    append_n(roman_number, "M", thousands);


  if (hundreds > 0 && hundreds < 4)
    append_n(roman_number, "C", hundreds);
  else if (hundreds == 4)
    roman_number.append("CD");
  else if (hundreds >= 5 && hundreds < 9)
  {
    roman_number.append("D");
    append_n(roman_number, "C", hundreds - 5);
  }
  else if (hundreds == 9)
    roman_number.append("CM");


  if (tens > 0 && tens < 4)
    append_n(roman_number, "X", tens);
  else if (tens == 4)
    roman_number.append("XL");
  else if (tens >= 5 && tens < 9)
  {
    roman_number.append("L");
    append_n(roman_number, "X", tens - 5);
  }
  else if (tens == 9)
    roman_number.append("XC");


  if (ones > 0 && ones < 4)
    append_n(roman_number, "I", ones);
  else if (ones == 4)
    roman_number.append("IV");
  else if (ones >= 5 && ones < 9)
  {
    roman_number.append("V");
    append_n(roman_number, "I", ones - 5);
  }
  else if (ones == 9)
    roman_number.append("IX");

  return roman_number;
}

int main()
{
  int number = 3472;

  cout << "Number " << number << " is in roman: " << convert_to_roman(number) << endl;

  return 0;
}
