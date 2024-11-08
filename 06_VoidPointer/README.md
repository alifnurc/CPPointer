# Introduction to Void Pointer

This is special type, which can point to any type.

```cpp
void increase(void *data, int ptrsize) {
  if (ptrsize == sizeof(char)) {
    char *ptrchar;

    ptrchar = (char *)data; // cast void pointer to char pointer

    (*ptrchar)++; // increase the value of the pointer by 1
    std::cout << "*data points to a char" << std::endl;
  }
}

```

This pointer cannot directly dereferenced, they have to be casted to a specific type
before being dereferenced.

```cpp
int main() {
  char c = 'x';
  increase(&c, sizeof(char));
  return 0;
}
```

Call function using the address of the variable.

## Conclusion

Void pointer and casting for handling data from different types.

This method is very useful for handling data from different types without create different functions for every type.
