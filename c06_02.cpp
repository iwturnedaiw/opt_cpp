#include <string>
#include <iostream>
#include <memory>

int main () {
  std::shared_ptr<int> a_ptr(new int(5));
  std::shared_ptr<int> b_ptr = a_ptr;

  std::cout << "a_ptr: " << a_ptr << std::endl;
  std::cout << "*a_ptr: " << *a_ptr << std::endl;
  std::cout << "b_ptr: " << b_ptr << std::endl;
  std::cout << "*b_ptr: " << *b_ptr << std::endl;
  *b_ptr = 10;
  std::cout << "a_ptr: " << a_ptr << std::endl;
  std::cout << "*a_ptr: " << *a_ptr << std::endl;
  std::cout << "b_ptr: " << b_ptr << std::endl;
  std::cout << "*b_ptr: " << *b_ptr << std::endl;
  return 0;
}
