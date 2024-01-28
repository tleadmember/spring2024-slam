#include <algorithm>
#include <iostream>
#include <random>

int main() {
  std::string in = "C++ is cool", out;
  auto rnd_dev = std::mt19937{std::random_device{}()};
  const int kNLetters = 5;

  std::sample(in.begin(), in.end(), std::back_inserter(out), kNLetters,
              rnd_dev);

  std::cout << "from: " << in << '\n';
  std::cout << "to: " << out << '\n';

  return 0;
}