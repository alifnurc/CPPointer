#include <iostream>
int main(int argc, char *argv[]) {
  const int a = 10;
  const int b = 20;

  const int *const ptr = &a;
  // ptr = &b; // assignment of read-only variable 'ptr'

  std::cout << ptr << std::endl;
  std::cout << *ptr << std::endl;

  return 0;
}
