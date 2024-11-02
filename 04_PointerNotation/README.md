# Introduction to Pointer Notation

```cpp
int arr[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
int *ptr;
ptr = *arr; // ptr mean 0
```

Array start at 0.

| 1st dimension | 1 | 2 | 3 | 4 |
| 2nd dimension | 5 | 6 | 7 | 8 |

## Pointer Notation

There are several styles for accessing two-dimensional arrays, including:

| Pointer Notation | Description | Value |
| -------- | ----------- | ------ |
| `*ptr` | mean assigned the [0][0] element. | `1` |
| `*(ptr + 1)` | the ptr sift 1 next address to the [0][1]. | `2` |
| `*ptr + 6` | mean [0][3] is end of 1st dimension, so [0][3] + 2 next address = [1][1] | `6` |
| `**arr` | mean `arr[0][0]` | `1` |
| `*(*(arr + 1) + 2)` | because `*(*(arr + 0) + 0)` is `arr[0][0]` | `7` |

## Conclusion

It's not complicated if you understand it.
