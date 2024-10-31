#include <iostream>
int main (int argc, char *argv[]) {

  int arr[3] = {1, 2, 3}; // declare an array.
  int *ptr; // declare a pointer variable.

  // Assign the address of arr[0] to ptr.
  // We can use ptr=&arr[0];(same as above)
  ptr = arr;

  std::cout << *ptr << std::endl;
  std::cout << *(ptr+1) << std::endl;
  std::cout << ptr[2] << std::endl;

  return 0;
}
