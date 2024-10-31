# Introduction to Pointer Array

## Declaration

```cpp
int arr[3] = {1, 2, 3};
int *ptr = arr;
```
is same with

## Assignment

```cpp
int arr[3] = {1, 2, 3};
int *ptr;
ptr = arr;
```

This will assign the address of the first element of the array to the pointer.

## Accessing

So to access the first element, you can use `*ptr`:

```cpp
std::cout << *ptr << std::endl;
```

And to access the second element, you can use `*(ptr + 1)` and so on.:

```cpp
std::cout << *(ptr + 1) << std::endl;
```

Or you can use `ptr[2]` and so on.:

```cpp
std::cout << ptr[2] << std::endl;
```

## Conclusion

All of the above is same, just the syntax is different.
