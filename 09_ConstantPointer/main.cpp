#include <iostream>
int main(int argc, char *argv[]) {
  int a = 12;
  int b = 13;

  int *const ptr = &a;

  std::cout << *ptr << std::endl;
  std::cout << ptr << std::endl;

  *ptr = 14;
  std::cout << *ptr << std::endl;

  // ptr = &b; // cannot assign to variable 'ptr' with const-qualified type 'int
  //  *const'
  std::cout << *ptr << std::endl;

  return 0;
}
