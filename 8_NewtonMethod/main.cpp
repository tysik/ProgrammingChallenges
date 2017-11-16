#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double epsilon = 0.000000001;
unsigned int counter = 0;

double my_function(double x)
{
  return cos(x);
}

double my_derivative(double x)
{
  return -sin(x);
}

double newton_method(double x_0, double (*f)(double), double (*df)(double))
{
  counter++;

  if (abs(f(x_0)) < epsilon)
    return x_0;
  else
    return newton_method(x_0 - f(x_0) / df(x_0), f, df);
}

int main()
{
  cout << setprecision(10) << newton_method(0.5, my_function, my_derivative) << endl;
  cout << counter << endl;

  return 0;
}
