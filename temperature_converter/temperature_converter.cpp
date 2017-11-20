#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const double MIN_TEMP = 0.0;
const double MAX_TEMP = 1000.0;

double c2f(double celsius) {
  return celsius * 9.0 / 5.0 + 32.0;
}

int main(int argc, char *argv[]) {
  double low_temp = MIN_TEMP - 1.0;
  double high_temp = MAX_TEMP + 1.0;
  double step = 0.0;

  while (low_temp < MIN_TEMP || low_temp > MAX_TEMP) {
    cout << "Please give in a lower limit (must be greater than or equal to " << MIN_TEMP << "): ";
    cin >> low_temp;
  }
  cout << endl;

  while (high_temp > MAX_TEMP || high_temp <= low_temp) {
    cout << "Please give in an upper limit (must be less than or equal to " << MAX_TEMP << "): ";
    cin >> high_temp;
  }
  cout << endl;

  while (step <= 0.0 || step > high_temp - low_temp) {
    cout << "Please give in a step (must be greater than 0): ";
    cin >> step;
  }
  cout << endl;

  cout << "Celsius\tFahrenheit\n------\t------" << endl;

  double temp = low_temp;
  while (temp <= high_temp) {
    cout << fixed << setprecision(3) << temp << "\t" << c2f(temp) << endl;
    temp += step;
  }

  return 0;
}
