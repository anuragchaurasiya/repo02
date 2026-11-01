# C++ Programming Foundations

<p align="center"><img src="assets/cpp-learning-banner.svg" alt="C++ Programming Foundations banner" width="100%" /></p>

<p align="center"><strong>Beginner-friendly C++ exercises covering syntax, arrays, loops, functions and problem solving.</strong></p>

## Topics

- Variables, data types and input/output
- Conditions and loops
- Arrays and traversal
- Functions
- Type conversion
- Number problems and basic algorithms

## Selected programs

| File | What it demonstrates |
|---|---|
| `Array.cpp` | Passing an array to a function |
| `ArraySum.cpp` | Summing array elements |
| `array_multiply.cpp` | Generating multiples using an array |
| `PrimeNumber.cpp` | Prime number checking |
| `voting.cpp` | Conditional logic and input validation |
| `Implicit.cpp`, `Explicit.cpp` | Type conversion |
| `Input_Array.cpp` | Reading and processing array input |

Additional beginner exercises are organised in the `Basic program.cpp/` and `output/` folders. These are source-code examples, not compiled output directories.

## Run a program

Requires a C++ compiler such as GCC. From the repository root:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic Array.cpp -o Array
./Array
```

For a nested example, pass its path to the compiler, for example:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic "Basic program.cpp/Add.cpp" -o Add
./Add
```

On Windows, run the generated `.exe` file from the terminal after compilation.

## Repository layout

```text
repo02/
├── .github/workflows/
│   └── cpp-ci.yml
├── assets/
│   └── cpp-learning-banner.svg
├── Basic program.cpp/
│   └── Add.cpp
├── output/
│   └── beginner C++ source examples
├── *.cpp
├── .gitignore
└── README.md
```

Generated executables and IDE build output should stay out of source control. See `.gitignore`.

## Learning roadmap

STL containers, searching, sorting, recursion, linked lists, trees and graphs.

## Maintainer

[Anurag Chaurasiya](https://github.com/anuragchaurasiya)