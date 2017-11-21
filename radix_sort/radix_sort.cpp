#include <iostream>
#include <random>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

random_device rd;
mt19937 generator(rd());
uniform_int_distribution<int> distribution(1, 10000);

auto roll_dice = [&](){ return distribution(generator); };

auto print_array = [](auto &array) {
  cout << "[ ";
  for_each(array.begin(), array.end(), [](auto a){ cout << a << " "; });
  cout << "]";
};

void radix_sort(vector<int> &numbers)
{
  vector<list<int>> sorting_array(10); // list for each digit 0 ... 9
  vector<list<int>> temp(10);

  sorting_array[0] = { make_move_iterator(begin(numbers)),
                       make_move_iterator(end(numbers)) };

  bool is_finished = false;
  int exponent = 0;
  while (!is_finished)
  {
    is_finished = true;

    for (size_t i = 0; i < 10; ++i)
    {
      for (auto it = sorting_array[i].begin(); it != sorting_array[i].end(); ++it)
      {
        if (*it >= pow(10, exponent))
          is_finished = false;

        int digit = (*it / static_cast<int>(pow(10, exponent))) % 10;

        temp[digit].push_back(*it);
        it = sorting_array[i].erase(it);
        it--;
      }
    }

    for (size_t i = 0; i < 10; ++i)
    {
      sorting_array[i].insert(sorting_array[i].end(), temp[i].begin(), temp[i].end());
      temp[i].clear();
    }

    exponent++;
  }

  // Copy back the first list to vector
  numbers = { make_move_iterator(begin(sorting_array[0])),
              make_move_iterator(end(sorting_array[0])) };
}

int main()
{
  vector<int> random_numbers;
  for (size_t i = 0; i < 10; ++i)
    random_numbers.push_back(roll_dice());

  cout << "Unsorted numbers:";
  print_array(random_numbers);
  cout << endl;

  cout << "Doing radix sort..." << endl;
  radix_sort(random_numbers);

  cout << "Sorted numbers:";
  print_array(random_numbers);
  cout << endl;

  return 0;
}
