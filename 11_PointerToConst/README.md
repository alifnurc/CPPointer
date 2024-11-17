# Introduction to Pointer to Constant

The data pointed by the pointer is constant and cannot be changed.

But, the pointer itself can be changed.

# Declaration

```cpp
int a = 10;
const int *ptr = &a;
```

## Change the pointer

```cpp
int b = 20;
ptr = &b;
```

The value of `ptr` is changed to the address of `b`.

## What if we try to change the value?

```cpp
*ptr = 30;
```

We will get the following error:
`Assignment of read-only location 'ptr'`

## Conclusion

Ensures that the value pointed to by the pointer cannot be changed via the pointer, but the pointer itself can be changed.
