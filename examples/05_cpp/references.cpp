#include <iostream>
using std::cout, std::endl;

int main() {
  int num = 42;
  int &ref = num;        // reference
  const int &kRef = num; // const reference

  ref = 0;
  cout << ref << " " << num << " " << kRef << endl;
  num = 42;
  cout << ref << " " << num << " " << kRef << endl;

  return 0;
}