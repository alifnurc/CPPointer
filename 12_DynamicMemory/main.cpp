#include <iostream>
int main(int argc, char *argv[]) {

  int *ptr;
  ptr = new int; // allocating memory for integer

  *ptr = 10; // assigning value
  std::cout << *ptr << std::endl;
  std::cout << ptr << std::endl;

  return 0;
}
