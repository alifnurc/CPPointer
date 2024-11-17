#include <iostream>
int main(int argc, char *argv[]) {
  int a = 10;
  int b = 20;

  const int *ptr = &a;

  std::cout << *ptr << std::endl;

  ptr = &b;

  *ptr = 30;

  std::cout << *ptr << std::endl;

  return 0;
}
