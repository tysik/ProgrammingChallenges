#include <iostream>
#include <vector>
#include <cmath>

#include "matplotlibcpp.h"

using namespace std;
namespace plt = matplotlibcpp;

// Time and samples
const double system_dt = 0.0001; // days
const double simulation_time = 200.0; //
size_t N = static_cast<size_t>(simulation_time / system_dt);

// Process constants
const double x_0 = 10.0;  // x - initial number of rabbits
const double y_0 = 10.0;   // y - initial number of foxes
const double alpha = 0.1;   // a - how fast rabbits are born
const double beta = 0.02;   // b - how fast rabbits are killed because of foxes
const double delta = 0.02;  // c - how fast foxes are born
const double gammas = 0.4;   // d - how fast foxes are dying
const double g = 0.001;//0.001;
const double h = 0.01;//0.01;

//const double x_0 = 0.9;  // x - initial number of rabbits
//const double y_0 = 0.9;   // y - initial number of foxes
//const double alpha = 2.0 / 3.0;   // a - how fast rabbits are born
//const double beta = 4.0 / 3.0;   // b - how fast rabbits are killed because of foxes
//const double delta = 1.0;  // c - how fast foxes are born (8 foxes per female fox per d)
//const double gammas = 1.0;   // d - how fast foxes are dying
//const double g = 0.0;//0.001;
//const double h = 0.0;//0.01;

int main()
{
  // Buffers for plots
  vector<double> time(N);
  vector<double> x(N);
  vector<double> y(N);

  // Initial values
  time[0] = 0.0;
  x[0] = x_0;
  y[0] = y_0;

  // Simulation
  for (size_t i = 1; i < N; ++i)
  {
    time[i] = i * system_dt;
//    x[i] = x[i - 1] + (alpha * x[i - 1] - beta * x[i - 1] * y[i - 1]) * system_dt;
//    y[i] = y[i - 1] + (delta * x[i - 1] * y[i - 1] - gammas * y[i - 1]) * system_dt;

    x[i] = x[i - 1] + (alpha * x[i - 1] - beta * x[i - 1] * y[i - 1] - g * x[i - 1] * x[i - 1]) * system_dt;
    y[i] = y[i - 1] + (delta * x[i - 1] * y[i - 1] - gammas * y[i - 1] - h * y[i - 1] * y[i - 1]) * system_dt;

    //cout << "Day: [" << time[i] << "] Rabbits: " << x[i] << ", Foxes: " << y[i] << endl;
  }

  // Plots
  plt::title("Foxes vs rabbits");
  plt::xlabel("Time [days]");
  plt::ylabel("Number of animals");
  plt::named_plot("Rabbits", time, x, "-");
  plt::named_plot("Foxes", time, y, "-");
  plt::legend();
  plt::grid(true);
  plt::xlim(0.0, simulation_time - system_dt);
  plt::show();

  plt::title("Foxes vs rabbits");
  plt::xlabel("Foxes");
  plt::ylabel("Rabbits");
  plt::named_plot("Conflict", y, x, "-");
  plt::legend();
  plt::grid(true);
  plt::show();

  return 0;
}
