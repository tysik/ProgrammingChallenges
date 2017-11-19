#include <iostream>
#include <vector>
#include <list>

using namespace std;

vector<int> prime_numbers;

int main()
{
  unsigned int N = 100000;
  unsigned int counter = 0;

  // Initialize array of numbers
  list<unsigned int> my_array;
  for (unsigned int i = 2; i < N; ++i)
    my_array.push_back(i);

  while (my_array.size() > 0)
  {
    counter++;
    prime_numbers.push_back(my_array.front());

    for (auto it = my_array.begin(); it != my_array.end(); it++)
      if (*it % prime_numbers.back() == 0)
        it = my_array.erase(it);
  }

  cout << "Prime numbers found in " << counter << " steps: " << endl;
  for (int n : prime_numbers)
    cout << n << " ";

  cout << endl;

  return 0;
}
