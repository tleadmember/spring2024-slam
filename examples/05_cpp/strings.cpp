#include <iostream>
#include <string>

int main() {
  const std::string s("hello");
  std::string S{s};

  std::cout << S << '\n';
}