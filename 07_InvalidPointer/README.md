# Introduction to Invalid Pointer

A pointer is should point to a valid address, but not necessarily a valid element.

For example:

```cpp
int *ptr1; // uninitialized pointer
```

and

```cpp
int arr[10];
int *ptr2 = arr+11; // out of bound of arr
```

## Conclusion

Invalid pointer do not necessarily make compile error.
