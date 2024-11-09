int main(int argc, char *argv[]) {
  int *ptr1; // uninitialized pointer
  int arr[10];
  int *ptr2 = arr + 11; // out of bounds of arr
  return 0;
}
