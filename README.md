*This project has been created as part of the 42 curriculum by ahautefe.*

# Libft

## Description

Libft is my first C library, built as part of the 42 curriculum. The
goal is to reimplement a set of standard libc functions and to add
extra utilities for strings, memory, output and linked lists, which
can be reused in later projects. Everything is compiled into a
static library, `libft.a`.

The project is split into three parts:

- **Part 1 - Libc functions**: reimplementations of standard
  functions, prefixed with `ft_`.
- **Part 2 - Additional functions**: functions that are not in the
  libc or exist in another form.
- **Part 3 - Linked lists**: functions to manipulate the `t_list`
  structure.

### Library content

Reimplementations of standard libc functions, with the same
prototypes and behavior as described in their `man` pages (only
the `ft_` prefix differs).

| Category | Functions |
|----------|-----------|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_atoi` |
| Allocation | `ft_calloc`, `ft_strdup` |

#### Part 2 - Additional functions

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len);` | Returns a new substring of `s`, starting at `start`, of at most `len` characters. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2);` | Returns a new string made of `s1` followed by `s2`. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set);` | Returns a copy of `s1` without the characters of `set` at its beginning and end. |
| `ft_split` | `char **ft_split(char const *s, char c);` | Splits `s` using `c` as delimiter and returns a NULL-terminated array of new strings. |
| `ft_itoa` | `char *ft_itoa(int n);` | Returns a new string representing the integer `n` (negative numbers included). |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Applies `f` to each character of `s` (with its index) and returns a new string of the results. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char *));` | Applies `f` to each character of `s` (with its index), passing it by address. |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd);` | Writes the character `c` to the file descriptor `fd`. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd);` | Writes the string `s` to the file descriptor `fd`. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd);` | Writes the string `s` followed by a newline to `fd`. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd);` | Writes the integer `n` to the file descriptor `fd`. |

Functions that allocate memory return `NULL` if the allocation fails.

#### Part 3 - Linked lists

The following structure is used:

    typedef struct s_list
    {
        void            *content;
        struct s_list   *next;
    }   t_list;

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_lstnew` | `t_list *ft_lstnew(void *content);` | Creates a new node holding `content`, with `next` set to NULL. |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new);` | Adds the node `new` at the beginning of the list. |
| `ft_lstsize` | `unsigned int ft_lstsize(t_list *lst);` | Returns the number of nodes in the list. |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst);` | Returns the last node of the list. |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new);` | Adds the node `new` at the end of the list. |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *));` | Frees the content of a node with `del`, then the node itself (not the next one). |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *));` | Deletes and frees a node and all its successors, then sets the list pointer to NULL. |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *));` | Applies `f` to the content of each node. |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | Builds a new list by applying `f` to each node's content, using `del` to clean up if an allocation fails. |

### Technical choices

- No global variables; helper functions are declared `static`.
- Every function that allocates memory returns `NULL` on failure.
  `ft_split` and `ft_lstmap` free everything they allocated before
  returning `NULL`.
- `ft_calloc` returns a unique pointer that can be passed to `free`
  when `nmemb` or `size` is 0.
- The library is built with `ar` and compiled with `cc -Wall -Wextra
  -Werror`. The Makefile does not relink unnecessarily.

## Instructions

Build the library from the root of the repository:

    make         # build libft.a
    make clean   # remove object files
    make fclean  # remove object files and libft.a
    make re      # rebuild everything

To use it in your own project, include the header :

    #include "libft.h"


## Resources

- `man` pages of the reimplemented functions (for example
  `man 3 strlcpy`)
- Youtube tutos to understand concepts of structures and linked lists.

**Use of AI:** I used AI as a learning aid, not to write my code. It
helped me understand the expected behavior of some functions in edge
cases, and it explained concepts I had misunderstood about pointers
and memory management. I also used AI (Claude) to help me write this
README. All the code was written by me.
