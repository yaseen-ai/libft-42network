# Libft - C Library
libft is a personal C library of functions that serves as a foundational building block for various projects at 42. The library consists of various commonly used functions and algorithms in C, including string manipulation, memory allocation, and linked lists, among others.

## Installation
To use the library in your project, clone the repository and compile it with the following commands:
```bash
$ git clone https://github.com/yel-hadd/libft-42network.git libft
$ cd libft
$ make
```
This will generate a libft.a file that you can link to your project.

## Usage
Include the library header in your source file and link the libft.a file to your project:
```c
#include "libft.h"

// Your Code Here
```
```bash
gcc -Wall -Werror -Wextra [your source files] libft.a -o [executable name]
```

## Examples
Here are a few examples of functions available in the library:
```c
ft_memset(void *b, int c, size_t len); // fills first len bytes of b with c
ft_strlen(const char *s); // returns the length of s
ft_strdup(const char *s1); // returns a pointer to a newly allocated copy of s1
ft_isalpha(int c); // returns 1 if c is an alphabet, 0 otherwise
ft_tolower(int c); // returns the lowercase version of c
ft_lstnew(void *content); // creates a new linked list node with content
```

## Contributing
Feel free to contribute to the library by submitting a pull request with new or improved functions. Please follow the code style and naming conventions used in the repository.

## License
This project is licensed under the MIT License.
