<div align="center">

<a href="https://42.fr/"><img src="https://raw.githubusercontent.com/doooriian/42-Badges/main/badges/libftm.png" width="125" alt="Libft 42 project badge" /></a>

# Libft

**C utility library**

<img src="https://img.shields.io/badge/42%20School-Project-7C3AED?style=flat-square" alt="42 School project" />

</div>

---

## 🔎 Overview

**Libft** is an individual project at 42 School aimed at recreating essential C standard library functions, along with additional utilities. This library serves as a foundation for future projects at 42, where the use of certain standard libraries is restricted. As we progress through the curriculum, this library will expand with more custom functions tailored to our needs.

The goal? Build a robust, reusable, and efficient set of tools from scratch.

---

## ✨ Function Categories

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
- [`ft_lstnew`](https://github.com/doooriian/Libft/blob/main/ft_lstnew_bonus.c) — Creates a new linked list node.
- [`ft_lstadd_front`](https://github.com/doooriian/Libft/blob/main/ft_lstadd_front_bonus.c) — Adds a node to the front of the list.
- [`ft_lstsize`](https://github.com/doooriian/Libft/blob/main/ft_lstsize_bonus.c) — Counts the number of nodes in the list.
- [`ft_lstlast`](https://github.com/doooriian/Libft/blob/main/ft_lstlast_bonus.c) — Returns the last node of the list.
- [`ft_lstadd_back`](https://github.com/doooriian/Libft/blob/main/ft_lstadd_back_bonus.c) — Adds a node to the end of the list.
- [`ft_lstclear`](https://github.com/doooriian/Libft/blob/main/ft_lstclear_bonus.c) — Deletes and frees the entire list.
- [`ft_lstiter`](https://github.com/doooriian/Libft/blob/main/ft_lstiter_bonus.c) — Applies a function to each list element.
- [`ft_lstmap`](https://github.com/doooriian/Libft/blob/main/ft_lstmap_bonus.c) — Maps a function over the list, creating a new one.

---

## 🛠️ Technologies Used
- **[C](https://devdocs.io/c/)** — Core programming language.
- **[Makefile](https://www.gnu.org/software/make/manual/make.html)** — Build automation tool.

---

## 🚀 How to Build and Run

1. Clone repository
    ```bash
    git clone git@github.com:doooriian/Libft.git
    ```

2. Go inside project directory and run `make`
    ```bash
    cd Libft
    make
    ```
3. Include `libft.h` in your project and link `libft.a` when compiling. For linked-list functions, run `make bonus`.


## 🧪 Testing

This project was tested using **[Francinette](https://github.com/xicodomingues/francinette)**, a widely-used third-party tester designed for 42 School projects.

## 🏅 Results

Here’s my score for the Libft project:

<p align="center">
  <img src="https://github.com/doooriian/42-Badges/blob/main/badges/LibftGrade.png" alt="Libft Grade">
</p>

## 📬 Contact

Feel free to reach out or contribute to this project via [GitHub](https://github.com/doooriian)!
