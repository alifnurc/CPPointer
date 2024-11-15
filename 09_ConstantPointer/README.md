# Introduction to Constant Pointer

A constant pointer is a pointer points to a fixed memory location.
The value at that location can be changed but the location cannot be changed.

## Declaration

```cpp
int a = 12;
int *const ptr = &a;
```

`ptr` is a constant pointer that points to the address of `a`.

## Change the value

```cpp
*ptr = 14;
```

The value of `a` is changed to `14`.

## What if we try to change the address?

```cpp
ptr = &b;
```

We will get the following error:
`Cannot assign to variable 'ptr' with const-qualified type 'int *const'`

## Conclusion

Useful when we need to make sure that a pointer points to a fixed address and still have to change the value.
