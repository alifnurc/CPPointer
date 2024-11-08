#include <iostream>
void increase(void *data, int ptrsize) {
  if (ptrsize == sizeof(char)) {
    char *ptrchar;

    ptrchar = (char *)data; // cast void pointer to char pointer

    (*ptrchar)++; // increase the value of the pointer by 1
    std::cout << "*data points to a char" << std::endl;
  }
  if (ptrsize == sizeof(int)) {
    int *ptrint;

    ptrint = (int *)data; // cast void pointer to int pointer

    (*ptrint)++; // increase the value of the pointer by 1
    std::cout << "*data points to an int" << std::endl;
  }
}

int main(int argc, char *argv[]) {
  char c = 'x';
  int i = 1;

  // Call increase function using the address of c and i
  increase(&c, sizeof(c));
  std::cout << "The new value of c is " << c << std::endl;

  increase(&i, sizeof(i));
  std::cout << "The new value of i is " << i << std::endl;

  return 0;
}
