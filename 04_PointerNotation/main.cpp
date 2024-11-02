#include <iostream>
int main (int argc, char *argv[]) {
  int arr[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};  // declare an array
  int *ptr; // declare a pointer variable
  ptr = *arr; // assign the address of arr[0][0] to ptr

  std::cout << *ptr << std::endl;
  std::cout << *(ptr + 1) << std::endl;
  std::cout << *(ptr + 4) << std::endl;
  std::cout << *ptr + 6 << std::endl;

  std::cout << **arr << std::endl;
  std::cout << *(*arr + 1) << std::endl;
  std::cout << **(arr + 1) << std::endl;
  std::cout << *(*(arr + 1) + 2) << std::endl;

  return 0;
}
