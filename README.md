# 42-libft

## About
Own implementation of some standard C library functions, non-standard functions including functions to manage linked lists.

<!--
## Getting started
### Prerequisites
### Installation
-->


## Usage

### Functions

|Name|Description|#|
|---|---|---|
|ft_isalpha|Checks whether the given character is an alphabetic letter.|<sup>[1](#ctype)</sup>|
|ft_isdigit|Checks whether the given character is a digit.|<sup>[1](#ctype)</sup>|
|ft_isalnum|Checks whether the given character is an alphabetic letter *or* a digit.|<sup>[1](#ctype)</sup>|
|ft_isascii|Checks whether the given character is an ASCII character.|<sup>[1](#ctype)</sup>|
|ft_isprint|Checks whether the given character is a printable one.|<sup>[1](#ctype)</sup>|
|ft_islower|Checks whether the given character is in lowercase.|<sup>[1](#ctype)</sup>|
|ft_isupper|Checks whether the given character is in uppercase.|<sup>[1](#ctype)</sup>|
|ft_tolower|Transforms an uppercase character to lowercase.|<sup>[1](#ctype)</sup>|
|ft_toupper|Transforms a lowercase character to uppercase.|<sup>[1](#ctype)</sup>|
|ft_strlen|Returns the length of a string.|<sup>[2](#string)</sup>|
|ft_memset|Fills the pointed memory with a constant byte *n* times.|<sup>[2](#string)</sup>|
|ft_bzero|Fills the pointed memory with zeros *n* times.|<sup>[2](#string)</sup>|
|ft_memcpy|Copies *n* bytes from the source to the destination.|<sup>[2](#string)</sup>|
|ft_strlcpy|Copies *n* bytes from the source to the destination and NUL-terminate the result.|<sup>[2](#string)</sup>|
|ft_strlcat|Concatenates the source to the destination and NUL-terminate the result.|<sup>[2](#string)</sup>|
|ft_strchr|Finds the first occurrence of the given character in the string.|<sup>[2](#string)</sup>|
|ft_strrchr|Finds the last occurrence of the given character in the string.|<sup>[2](#string)</sup>|
|ft_strncmp|Compares the first *n* characters of two strings.|<sup>[2](#string)</sup>|
|ft_memchr|Finds the first occurrence of the character in the pointed memory.|<sup>[2](#string)</sup>|
|ft_memcmp|Compares the first *n* bytes of two areas in memory.|<sup>[2](#string)</sup>|
|ft_strnstr|Finds the first occurrence of a keyword in the first *n* characters of the string.|<sup>[2](#string)</sup>|
|ft_strdup|Duplicates a string.|<sup>[2](#string)</sup>|
|ft_atoi|Converts a number in string format to an integer.|<sup>[3](#stdlib)</sup>|
|ft_calloc|Dynamically allocates memory and fills it with zero bytes.|<sup>[3](#stdlib)</sup>|
|ft_substr|Returns a substring defined by a starting index and a length.|<sup>[4](#non-standard)</sup>|
|ft_strjoin|Concatenates two strings.|<sup>[4](#non-standard)</sup>|
|ft_strtrim|Removes the characters defined in the set at the beginning and end of the string.|<sup>[4](#non-standard)</sup>|
|ft_split|Extracts the substrings delimited by a given character.|<sup>[4](#non-standard)</sup>|
|ft_itoa|Converts an integer to a string.|<sup>[4](#non-standard)</sup>|
|ft_strmapi|Applies a function to each character of a string.|<sup>[4](#non-standard)</sup>|
|ft_striteri|Applies a function to each character of a string passed by reference.|<sup>[4](#non-standard)</sup>|
|ft_putchar_fd|Prints a character to the file descriptor.|<sup>[4](#non-standard)</sup>|
|ft_putstr_fd|Prints a string to the file descriptor.|<sup>[4](#non-standard)</sup>|
|ft_putendl_fd|Prints a string to the file descriptor with a newline.|<sup>[4](#non-standard)</sup>|
|ft_putnbr_fd|Prints a number to the file descriptor.|<sup>[4](#non-standard)</sup>|
|ft_lstnew|Creates a new node and initializes its content.|<sup>[5](#linked-list)</sup>|
|ft_lstadd_front|Adds a node at the beginning of a list.|<sup>[5](#linked-list)</sup>|
|ft_lstsize|Counts the number of nodes in a list.|<sup>[5](#linked-list)</sup>|
|ft_lstlast|Returns the last node of the list.|<sup>[5](#linked-list)</sup>|
|ft_lstadd_back|Adds a node at the end of a list.|<sup>[5](#linked-list)</sup>|
|ft_lstdelone|Deletes a node.|<sup>[5](#linked-list)</sup>|
|ft_lstclear|Deletes a node and all the succeeding nodes.|<sup>[5](#linked-list)</sup>|
|ft_lstiter|Applies a function to the content of each node of a list.|<sup>[5](#linked-list)</sup>|
|ft_lstmap|Creates a copy of a list. A function is applied to each of its nodes.|<sup>[5](#linked-list)</sup>|

[1](#ctype) : `<ctype.h>` functions  
[2](#string) : `<string.h>` functions  
[3](#stdlib) : `<stdlib.h>` functions  
[4](#non-standard) : Non-standard functions  
[5](#linked-list) : Linked list functions  

<!--## Roadmap-->
<!--## Contributing-->
<!--## License-->
<!--## Contact-->
<!--## Aknowledgements-->

---
*42 is a coding school that emphasizes on project-based learning and peer-to-peer education.*

*The project complies with the 42 norm. The latest norm can be found on the [42 intra site](https://meta.intra.42.fr/articles/the-norm-v4) (requires authentication)*.