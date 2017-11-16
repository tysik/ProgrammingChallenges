#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double epsilon = 0.00000001;

double my_function(double x)
{
  return cos(x);
  //return -pow(x, 2.0) + x + 5;
}

double bisect(double a, double b, double (*f)(double x))
{
  if (f(a) * f(b) > 0.0)
    throw "Zero or even number of roots between a and b";
  else if (abs(f(a)) < epsilon)
    return a;
  else if (abs(f(a)) < epsilon)
    return b;
  else
  {
    double c = (a + b) / 2.0;

    if (f(a) * f(c) < 0.0)
      return bisect(a, c, my_function);
    else if (f(c) * f(b) < 0.0)
      return bisect(c, b, my_function);
    else
      return c;
  }
}

int main()
{
  try
  {
    cout << setprecision(10) << bisect(0.0, 2.0, my_function) << endl;
  }
  catch (const char* e)
  {
    cout << e << endl;
  }

  return 0;
}
