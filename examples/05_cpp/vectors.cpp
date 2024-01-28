#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

template <typename S>
ostream &operator<<(ostream &os, const vector<S> &vector) {
  // Printing all the elements
  // using <<
  for (auto element : vector) {
    os << element << " ";
  }
  return os;
}

int main() {
  std::vector<int> v(10, 2);

  cout << v << '\n';

  std::partial_sum(v.begin(), v.end(), v.begin());

  cout << v << '\n';

  return 0;
}