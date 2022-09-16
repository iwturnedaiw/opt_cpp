#include <string>
#include <iostream>

int main () {
  std::string a = "hoge";
  std::string b = a;
  std::cout << "a at " << &a << std::endl;
  std::cout << "b at " << &b << std::endl;
  return 0;
}
