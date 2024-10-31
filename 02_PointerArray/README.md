# Introduction to Pointer Array

## Declaration
```
int arr[3] = {1, 2, 3};
int *ptr = arr;
```
is same with

## Assignment
```
int arr[3] = {1, 2, 3};
int *ptr;
ptr = arr;
```

This will assign the address of the first element of the array to the pointer.
So to access the first element, you can use `*ptr`:
```
std::cout << *ptr << std::endl;
```

And to access the second element, you can use `*(ptr + 1)` and so on.:
```
std::cout << *(ptr + 1) << std::endl;
```

Or you can use `ptr[2]` and so on.:
```
std::cout << ptr[2] << std::endl;
```

## Conclusion
All of the above is same, just the syntax is different.
