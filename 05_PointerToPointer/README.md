# Introduction to Pointer to Pointer

```cpp
  char a;
  char *b;
  char **c;

  a = 'a';
  b = &a;
  c = &b;

```

`a` is a character variable.

`b` is a pointer to a character variable.

`c` is a pointer to a pointer to a character variable.

## Conclusion

All of the output is the same. Because a, \*b, and \*\*c are referenced to value of a.
