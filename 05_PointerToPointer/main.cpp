#include <iostream>
int main (int argc, char *argv[]) {
  char a;
  char *b;
  char **c;

  a = 'a';
  b = &a;
  c = &b;

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << *b << std::endl;
  std::cout << "c: " << **c << std::endl;
  
  return 0;
}
