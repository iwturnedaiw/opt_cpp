#include <string>
#include <iostream>

int main () {
  const int UPPER = 10'000'000;
  char hoge[UPPER];

  for (int i = 0; i < UPPER - 1; ++i) {
    hoge[i] = 0x41;
  }
  hoge[UPPER - 1] = '\0';

  std::cout << hoge << std::endl;
  return 0;
}
