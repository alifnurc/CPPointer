#include <iostream>
int main (int argc, char *argv[]) {
  int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // declare an array
  int *ptr; // declare a pointer variable
  ptr = arr; // assign the address of arr[0] to ptr
  
  std::cout << "value at ptr = " << ptr + 9 << std::endl;
  std::cout << "value at *ptr = " << *(ptr + 9) << std::endl;

  std::cout << "value at ptr = " << ptr++ << std::endl;
  std::cout << "value at *ptr = " << *ptr++ << std::endl;

  for (int i = 0; i < 3; i++) {
    std::cout << "value at ptr = " << ptr << std::endl;
    std::cout << "value at *ptr = " << *ptr << std::endl;
    ptr++; // increment the pointer
  }
  return 0;
}
