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

|Name|Description|Category|
|---|---|---|
|ft_isalpha|Checks whether the given character is an alphabetic letter.|<ctype.h>|
|ft_isdigit|Checks whether the given character is a digit.|<ctype.h>|
|ft_isalnum|Checks whether the given character is an alphabetic letter *or* a digit.|<ctype.h>|
|ft_isascii|Checks whether the given character is an ASCII character.|<ctype.h>|
|ft_isprint|Checks whether the given character is a printable one.|<ctype.h>|
|ft_islower|Checks whether the given character is in lowercase.|<ctype.h>|
|ft_isupper|Checks whether the given character is in uppercase.|<ctype.h>|
|ft_tolower|Transforms an uppercase character to lowercase.|<ctype.h>|
|ft_toupper|Transforms a lowercase character to uppercase.|<ctype.h>|
|ft_strlen|Returns the length of a string.|<string.h>|
|ft_memset|Fills the pointed memory with a constant byte *n* times.|<string.h>|
|ft_bzero|Fills the pointed memory with zeros *n* times.|<string.h>|
|ft_memcpy|Copies *n* bytes from the source to the destination.|<string.h>|
|ft_strlcpy|Copies *n* bytes from the source to the destination and NUL-terminate the result.|<string.h>|
|ft_strlcat|Concatenates the source to the destination and NUL-terminate the result.|<string.h>|
|ft_strchr|Finds the first occurrence of the given character in the string.|<string.h>|
|ft_strrchr|Finds the last occurrence of the given character in the string.|<string.h>|
|ft_strncmp|Compares the first *n* characters of two strings.|<string.h>|
|ft_memchr|Finds the first occurrence of the character in the pointed memory.|<string.h>|
|ft_memcmp|Compares the first *n* bytes of two areas in memory.|<string.h>|
|ft_strnstr|Finds the first occurrence of a keyword in the first *n* characters of the string.|<string.h>|
|ft_strdup|Duplicates a string.|<string.h>|
|ft_atoi|Converts a number in string format to an integer.|<stdlib.h>|
|ft_calloc|Dynamically allocates memory and fills it with zero bytes.|<stdlib.h>|
|ft_substr|Returns a substring defined by a starting index and a length.|Non-standard|
|ft_strjoin|Concatenates two strings.|Non-standard|
|ft_strtrim|Removes the characters defined in the set at the beginning and end of the string.|Non-standard|
|ft_split|Extracts the substrings delimited by a given character.|Non-standard|
|ft_itoa|Converts an integer to a string.|Non-standard|
|ft_strmapi|Applies a function to each character of a string.|Non-standard|
|ft_striteri|Applies a function to each character of a string passed by reference.|Non-standard|
|ft_putchar_fd|Prints a character to the file descriptor.|Non-standard|
|ft_putstr_fd|Prints a string to the file descriptor.|Non-standard|
|ft_putendl_fd|Prints a string to the file descriptor with a newline.|Non-standard|
|ft_putnbr_fd|Prints a number to the file descriptor.|Non-standard|
|ft_lstnew|Creates a new node and initializes its content.|Linked list|
|ft_lstadd_front|Adds a node at the beginning of a list.|Linked list|
|ft_lstsize|Counts the number of nodes in a list.|Linked list|
|ft_lstlast|Returns the last node of the list.|Linked list|
|ft_lstadd_back|Adds a node at the end of a list.|Linked list|
|ft_lstdelone|Deletes a node.|Linked list|
|ft_lstclear|Deletes a node and all the succeeding nodes.|Linked list|
|ft_lstiter|Applies a function to the content of each node of a list.|Linked list|
|ft_lstmap|Creates a copy of a list. A function is applied to each of its nodes.|Linked list|

<!--## Roadmap-->
<!--## Contributing-->
<!--## License-->
<!--## Contact-->
<!--## Aknowledgements-->

---
*42 is a coding school that emphasizes on project-based learning and peer-to-peer education.*

*The project complies with the 42 norm. The latest norm can be found on the [42 intra site](https://meta.intra.42.fr/articles/the-norm-v4) (requires authentication)*.