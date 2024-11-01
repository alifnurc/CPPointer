# CPPointer

My journey learning pointers in C++.

## Structure of this repo

```
CPPointer                 # this repo
├── 00_Pointers           # chapter 00
│   ├── CMakeLists.txt    # cmake build intruction
│   ├── main.cpp          # example code
│   └── README.md         # chapter description
├── LICENSE
└── README.md             # this file
```

## How to use this repo?

Just pick any chapter, and read the README.md in the chapter.

## How to run examples?

After pick any chapter, you should create a `build` folder and run `cmake ..` in the `build` folder.

Then build the code with `cmake --build .` and run `./XX_CHAPTER`.

Or just

```bash
cmake .
cmake --build .
./XX_CHAPTER
```

## Chapter List

| Chapter | Description |
| --- | --- |
| [00](00_Pointers/README.md) | Introduction to basic pointer. |
| [01](01_PassingBy/README.md) | Passing functions arguments. |
| [02](02_PointerArray/README.md) | Array name as pointers. |
| [03](03_PointerArithmetic/README.md) | Pointer arithmetic. |
