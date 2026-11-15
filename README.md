# Libft

> **42 School project** · C · Standard library foundations

A reusable C library implementing essential string, memory, character and linked-list utilities for later 42 projects.

## Overview

A reusable C library implementing essential string, memory, character and linked-list utilities for later 42 projects.

## Features

- Character classification and conversion (`ft_isalpha`, `ft_isdigit`, `ft_toupper`, etc.)
- Memory and string functions (`ft_memmove`, `ft_split`, `ft_strjoin`, etc.)
- Conversion and allocation helpers (`ft_atoi`, `ft_itoa`, `ft_calloc`)
- Bonus linked-list operations (`ft_lstnew`, `ft_lstmap`, `ft_lstclear`)

## Technical approach

The library exposes a small C API through `libft.h`. Each routine is implemented separately to keep the code straightforward to inspect and reuse.

**Stack:** C · Make · Static library.

## Build and usage

```bash
git clone https://github.com/doooriian/Libft.git
cd Libft
make
```

The build produces `libft.a`. Include `libft.h` and link `libft.a` when compiling a program that uses it.

```bash
make bonus    # include linked-list functions
make fclean   # remove build outputs
```

## Verification

Review the output with representative inputs and edge cases. No automated CI test suite is included in this repository; build and behaviour should be verified in a compatible local environment.

## Notes and limitations

A learning-oriented implementation of selected C utilities, not a drop-in replacement for the entire standard library.

---

Part of the [42 curriculum](https://42.fr/). Explore the other projects on [my GitHub profile](https://github.com/doooriian).
