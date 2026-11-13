*This project has been created as part of the 42 curriculum by ruicarva.*

# Libft
## My first C library: libc functions re-coded from scratch, plus extra utilities and linked lists.
 
## Description
 
Libft as part of the 42 curriculum, is my first C library. The goal is to recreate the standard C library functions.
Add some utility functions, and linked lists, using only `malloc`, `free` and `write`.
 
(`libft.a`) will be used in later C projects.
 
## Instructions
 
```bash
make          # build libft.a (cc -Wall -Wextra -Werror)
make bonus    # build with the linked-list functions
make clean    # remove object files
make fclean   # remove object files and libft.a
make re       # rebuild from scratch
```
 
Implementation!!!
 
```c
#include "libft.h"
```
```bash
cc main.c -L. -lft -o program
```
 
## Functions included
 
* **Part 1 (libc):** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`, `ft_atoi`
* **Part 2 (additional):** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
* **Part 3 (linked lists):** `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`
## Resources
 
- [Libft 42 Subject](https://cdn.intra.42.fr/pdf/pdf/226728/en.subject.pdf)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [cppreference C](https://en.cppreference.com/w/c)
### AI Usage
I used mostly Gemini and Claude as tutors for my progress, sometimes as a means to correct my code, so i could understand what was not working.
  What I can conclude from this project:
 
In conclusion;

Trying to get every detail of every function does, could do, and differences in very simmillar functions was very hard. specially convuluted ones.
However, linked lists were a new concept that I loved learning.
