<br />
<p align="center">
  <a href="https://raw.githubusercontent.com/othneildrew/Best-README-Template/master/images/logo.png">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/1200px-42_Logo.svg.png" alt="42 Logo" width="250" height="250">
  </a>

  <h1 align="center">Libft</h1>

  <p align="center">
    A custom C library project from 42 School
    <br />
    <br />
    <img src="https://github.com/doooriian/42-Badges/blob/main/badges/libftm.png" alt="Libft Badge" width="150">
  </p>
</p>

<p align="center">
  <img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/doooriian/Libft?color=1A237E" />
  <img alt="Code language count" src="https://img.shields.io/github/languages/count/doooriian/Libft?color=00BCD4" />
  <img alt="GitHub top language" src="https://img.shields.io/github/languages/top/doooriian/Libft?color=7B1FA2" />
  <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/doooriian/Libft?color=D32F2F" />
</p>
---

## ✨ Overview

**Libft** is an individual project at 42 School aimed at recreating essential C standard library functions, along with additional utilities. This library serves as a foundation for future projects at 42, where the use of certain standard libraries is restricted. As we progress through the curriculum, this library will expand with more custom functions tailored to our needs.

The goal? Build a robust, reusable, and efficient set of tools from scratch.

---

## 📑 Function Categories

### 📚 `<ctype.h>` Functions
Functions for character handling:
- [`ft_isalpha`](https://github.com/doooriian/Libft/blob/main/ft_isalpha.c) — Checks if a character is alphabetic.
- [`ft_isdigit`](https://github.com/doooriian/Libft/blob/main/ft_isdigit.c) — Checks if a character is a digit (0-9).
- [`ft_isalnum`](https://github.com/doooriian/Libft/blob/main/ft_isalnum.c) — Checks if a character is alphanumeric.
- [`ft_isascii`](https://github.com/doooriian/Libft/blob/main/ft_isascii.c) — Validates if a character is in the ASCII set.
- [`ft_isprint`](https://github.com/doooriian/Libft/blob/main/ft_isprint.c) — Checks if a character is printable.
- [`ft_toupper`](https://github.com/doooriian/Libft/blob/main/ft_toupper.c) — Converts a character to uppercase.
- [`ft_tolower`](https://github.com/doooriian/Libft/blob/main/ft_tolower.c) — Converts a character to lowercase.

### 📚 `<string.h>` Functions
Functions for string and memory manipulation:
- [`ft_strlen`](https://github.com/doooriian/Libft/blob/main/ft_strlen.c) — Calculates the length of a string.
- [`ft_memset`](https://github.com/doooriian/Libft/blob/main/ft_memset.c) — Fills memory with a constant byte.
- [`ft_bzero`](https://github.com/doooriian/Libft/blob/main/ft_bzero.c) — Sets a memory block to zero.
- [`ft_memcpy`](https://github.com/doooriian/Libft/blob/main/ft_memcpy.c) — Copies memory from source to destination.
- [`ft_memmove`](https://github.com/doooriian/Libft/blob/main/ft_memmove.c) — Copies memory, handling overlapping areas.
- [`ft_strlcpy`](https://github.com/doooriian/Libft/blob/main/ft_strlcpy.c) — Copies a string with size limitation.
- [`ft_strlcat`](https://github.com/doooriian/Libft/blob/main/ft_strlcat.c) — Concatenates strings with size limitation.
- [`ft_strchr`](https://github.com/doooriian/Libft/blob/main/ft_strchr.c) — Finds the first occurrence of a character.
- [`ft_strrchr`](https://github.com/doooriian/Libft/blob/main/ft_strrchr.c) — Finds the last occurrence of a character.
- [`ft_strncmp`](https://github.com/doooriian/Libft/blob/main/ft_strncmp.c) — Compares two strings up to n characters.
- [`ft_memchr`](https://github.com/doooriian/Libft/blob/main/ft_memchr.c) — Scans memory for a specific character.
- [`ft_memcmp`](https://github.com/doooriian/Libft/blob/main/ft_memcmp.c) — Compares two memory blocks.
- [`ft_strnstr`](https://github.com/doooriian/Libft/blob/main/ft_strnstr.c) — Locates a substring within a string.
- [`ft_strdup`](https://github.com/doooriian/Libft/blob/main/ft_strdup.c) — Duplicates a string.

### 📚 `<stdlib.h>` Functions
Functions for memory allocation and conversion:
- [`ft_atoi`](https://github.com/doooriian/Libft/blob/main/ft_atoi.c) — Converts a string to an integer.
- [`ft_calloc`](https://github.com/doooriian/Libft/blob/main/ft_calloc.c) — Allocates memory and initializes it to zero.

### 🚀 Non-Standard Functions
Custom utility functions:
- [`ft_substr`](https://github.com/doooriian/Libft/blob/main/ft_substr.c) — Extracts a substring from a string.
- [`ft_strjoin`](https://github.com/doooriian/Libft/blob/main/ft_strjoin.c) — Concatenates two strings.
- [`ft_strtrim`](https://github.com/doooriian/Libft/blob/main/ft_strtrim.c) — Trims specific characters from a string.
- [`ft_split`](https://github.com/doooriian/Libft/blob/main/ft_split.c) — Splits a string by a delimiter.
- [`ft_itoa`](https://github.com/doooriian/Libft/blob/main/ft_itoa.c) — Converts an integer to a string.
- [`ft_strmapi`](https://github.com/doooriian/Libft/blob/main/ft_strmapi.c) — Applies a function to each character of a string.
- [`ft_striteri`](https://github.com/doooriian/Libft/blob/main/ft_striteri.c) — Applies a function to each character with index.
- [`ft_putchar_fd`](https://github.com/doooriian/Libft/blob/main/ft_putchar_fd.c) — Outputs a character to a file descriptor.
- [`ft_putstr_fd`](https://github.com/doooriian/Libft/blob/main/ft_putstr_fd.c) — Outputs a string to a file descriptor.
- [`ft_putendl_fd`](https://github.com/doooriian/Libft/blob/main/ft_putendl_fd.c) — Outputs a string + newline to a file descriptor.
- [`ft_putnbr_fd`](https://github.com/doooriian/Libft/blob/main/ft_putnbr_fd.c) — Outputs a number to a file descriptor.

### 🔗 Linked List Functions
Functions for linked list management:
- [`ft_lstnew`](https://github.com/doooriian/Libft/blob/main/ft_lstnew.c) — Creates a new linked list node.
- [`ft_lstadd_front`](https://github.com/doooriian/Libft/blob/main/ft_lstadd_front.c) — Adds a node to the front of the list.
- [`ft_lstsize`](https://github.com/doooriian/Libft/blob/main/ft_lstsize.c) — Counts the number of nodes in the list.
- [`ft_lstlast`](https://github.com/doooriian/Libft/blob/main/ft_lstlast.c) — Returns the last node of the list.
- [`ft_lstadd_back`](https://github.com/doooriian/Libft/blob/main/ft_lstadd_back.c) — Adds a node to the end of the list.
- [`ft_lstclear`](https://github.com/doooriian/Libft/blob/main/ft_lstclear.c) — Deletes and frees the entire list.
- [`ft_lstiter`](https://github.com/doooriian/Libft/blob/main/ft_lstiter.c) — Applies a function to each list element.
- [`ft_lstmap`](https://github.com/doooriian/Libft/blob/main/ft_lstmap.c) — Maps a function over the list, creating a new one.

---

## 🛠️ Technologies Used
- **[C](https://devdocs.io/c/)** — Core programming language.
- **[Makefile](https://www.gnu.org/software/make/manual/make.html)** — Build automation tool.

---

## 🚀 How to Build and Run

Clone the repository and use the following commands in your terminal:

```bash
# Compile the library and run all tests
make all

# Remove object files
make clean

# Remove object files and the library archive
make fclean

# Clean everything and recompile
make re

```

## 🧪 Testing

This project was tested using **[Francinette](https://github.com/xicodomingues/francinette)**, a widely-used third-party tester designed for 42 School projects.

## ✅ Results

Here’s my score for the Libft project:

<p align="center">
  <img src="https://github.com/doooriian/42-Badges/blob/main/badges/LibftGrade.png" alt="Libft Grade">
</p>

## 📬 Contact

Feel free to reach out or contribute to this project via [GitHub](https://github.com/doooriian/Libft)!
