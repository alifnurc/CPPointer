#include <iostream>

int main(int argc, char *argv[]) {

  int a = 10;
  int *b = &a;
  int &c = *b;
  int **d = &b;

  std::cout << a << std::endl;
  std::cout << *b << std::endl;
  std::cout << &c << std::endl;
  std::cout << **d << std::endl;

  return 0;
}
