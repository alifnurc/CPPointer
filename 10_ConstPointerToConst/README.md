# Introduction to Constant Pointer to Constant

The data pointed by a constant pointer to constant is not allowed to be modified.

The pointer it self is constant and cannot change and point somewhere else.

## Declaration

```cpp
const int a = 10;
const int *const ptr = &a;
```

## What if we try to change the value?

```cpp
const int b = 20;
*ptr = &b;
```

We will get the following error:
`assignment of read-only variable 'ptr'`

## Conclusion

We can use this in our configuration data structures that should not be changed after initialization.
