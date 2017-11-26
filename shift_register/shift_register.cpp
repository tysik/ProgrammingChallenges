#include <iostream>
#include <boost/circular_buffer.hpp>

class ShiftRegister {
public:
  ShiftRegister(size_t size, int value = 0) {
    buffer.assign(size, value);
  }

  int push_from_left(int n) {
    int result = buffer.back();
    buffer.push_front(n);
    return result;
  }

  int push_from_right(int n) {
    int result = buffer.front();
    buffer.push_back(n);
    return result;
  }

  friend std::ostream& operator<<(std::ostream &out, const ShiftRegister &sr)
  {
    out << "[ ";
    for (size_t i = 0; i < sr.buffer.size(); ++i)
       out << sr.buffer[i] << " ";
    out << "]";

    return out;
  }

private:
  boost::circular_buffer<int> buffer;
};

using namespace std;

int main()
{
  ShiftRegister sr(10, 1.0);
  cout << "Initial register: " << endl;
  cout << sr << endl;

  cout << "Pushing 2 from left" << endl;
  int n = sr.push_from_left(2);
  cout << "Output: " << n << endl;
  cout << "Current Register: " << endl;
  cout << sr << endl;

  n = sr.push_from_right(7);
  cout << "Output: " << n << endl;
  cout << "Current Register: " << endl;
  cout << sr << endl;

  return 0;
}

