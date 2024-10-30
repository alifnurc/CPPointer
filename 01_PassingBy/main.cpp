#include <iostream>
void int1(int a) {
  std::cout << "Address of a1: " << &a << std::endl;
  std::cout << "Value of a1: " << a << std::endl;
}

void int2(int *a) {
  std::cout << "Address of a2: " << a << std::endl;
  std::cout << "Value of a2: " << *a << std::endl;
}

void int3(int &a) {
  std::cout << "Address of a3: " << &a << std::endl;
  std::cout << "Value of a3: " << a << std::endl;
}

int main(int argc, char *argv[]) {
  int a = 10;

  std::cout << "Address of a: " << &a << std::endl;
  std::cout << "Value of a: " << a << std::endl;

  int1(a); // Passing by value.
  int2(&a); // Passing by reference.
  int3(a); // Passing by reference.

  return 0;
}
