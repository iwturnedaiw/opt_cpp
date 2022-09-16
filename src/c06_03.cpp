#include <string>
#include <iostream>
#include <bitset>


std::string MoveExample(std::string&& s)
{
  std::string tmp(std::move(s));
  //  Watch out! s is now empty.
  std::cout << std::hex << &tmp << std::endl;
  return tmp;
}
int main () {
  std::string s1 = "hello";
  std::string s2 = "everyone";
  std::string s3 = MoveExample(s1 + s2);
  std::cout << std::hex << &s3 << std::endl;

  return 0;
}
