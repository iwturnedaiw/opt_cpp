#include <string>
#include <iostream>
#include <bitset>


class Base {
  int a;
  int b;
  int c;
};

struct Example0
{
  int hoge;
  Base base;

  Example0 () : hoge(0), base({}){ }
};
struct Example1
{
  int hoge;
  Base * base;

  Example1 () : hoge(0) {
    base = new Base{};
  }
};




int main () {
  Example0 ex0;
  Example1 ex1;
  std::cout << std::hex << &ex0 << std::endl;
  std::cout << std::hex << &(ex0.hoge) << std::endl;
  std::cout << std::hex << &(ex0.base) << std::endl;
  std::cout << std::hex << &ex1 << std::endl;
  std::cout << std::hex << &(ex1.hoge) << std::endl;
  std::cout << std::hex << ex1.base << std::endl;

  return 0;
}
