# Introduction to Pointer Arithmetic

Arithmetic operator can be used with pointers which are:

| Operator | Description |
| -------- | ----------- |
| `+` | Add offset to pointer |
| `-` | Subtract offset from pointer |
| `++` | Increment pointer |
| `--` | Decrement pointer |

Because array is a linear data structure, we can use pointer arithmetic to access its elements.

```cpp
int arr[3] = {1, 2, 3};
int *ptr = arr;
std::cout << *(ptr + 1) << std::endl;
```

This will output `2`

## Conclusion

Pointer arithmetic is meaningless unless used on array.
