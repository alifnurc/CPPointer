# Introduction to Passing Functions
There are three ways to pass C++ arguments to functions.

## Passing by Value
The arguments are copied from the caller to the callee.
```
void int1(int a); // function prototype

int a = 10;
int1(a); // function call
```
Create copy of a variable, and if the function changes the copy, the real variable will not be affected.

## Passing by Pointer
The arguments are passed by pointer to the callee.
```
void int2(int *a); // function prototype

int a = 10;
int2(&a); // function call
```
Sent real address of a variable, and if the function changes the variable, the real variable will be affected.

## Passing by Reference
The arguments are passed by reference to the callee.
```
void int3(int &a); // function prototype

int a = 10;
int3(a); // function call
```
Sent real reference of a variable, similar to a pointer, but more secure and not needing manual dereference.
