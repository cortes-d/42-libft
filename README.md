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
#### From `<ctype.h>`

|Name|Description|
|---|---|
|ft_isalpha|Checks whether the given character is an alphabetic letter.|
|ft_isdigit|Checks whether the given character is a digit.|
|ft_isalnum|Checks whether the given character is an alphabetic letter *or* a digit.|
|ft_isascii|Checks whether the given character is an ASCII character.|
|ft_isprint|Checks whether the given character is a printable one.|
|*ft_islower*|Checks wheter the given character is in lowercase.|
|*ft_isupper*|Checks wheter the given character is in uppercase.|
|ft_tolower|Transforms an uppercase character to lowercase.|
|ft_toupper|Transforms a lowercase character to uppercase.|

#### From `<string.h>`

|Name|Description|
|---|---|
|ft_strlen|Returns the length of a string.|
|ft_memset|Fills the pointed memory with a constant byte *n* times.|
|ft_bzero|Fills the pointed memory with zeros *n* times.|
|ft_memcpy|Copies *n* bytes from the source to the destination. If the source and the destination overlap, the behaviour is undefined.|
|ft_strlcpy|Copies *n* bytes from the source to the destination and NUL-terminate the result. If the source and the destination overlap, the behaviour is undefined.|
|ft_strlcat|Concatenates the source to the destination and NUL-terminate the result.|
|ft_strchr|Finds the first occurrence of the given character in the string.|
|ft_strrchr|Finds the last occurrence of the given character in the string.|
|ft_strncmp|Compares the first *n* characters of two strings.|
|ft_memchr|Finds the first occurrence of the character in the pointed memory.|
|ft_memcmp|Compares the first *n* bytes of two areas in memory.|
|ft_strnstr|Finds the first occurrence of a keyword in the first *n* characters of the string.|
|ft_strdup|Duplicates a string.|

#### From `<stdlib.h>`

|Name|Description|
|---|---|
|ft_atoi|Converts a number in string format to an integer.|
|ft_calloc|Dynamically allocates memory and fills it with zero bytes.|

#### Non-standard

|Name|Description|
|---|---|
|ft_substr|Returns a substring defined by a starting index and a length.|
|ft_strjoin|Concatenates two strings.|
|ft_strtrim|Removes the characters defined in the set at the beginning and end of the string.|
|ft_split|Extracts the substrings delimited by a given character.|
|ft_itoa|Converts an integer to a string.|
|ft_strmapi|Applies a function to each character of a string.|
|ft_striteri|Applies a function to each character of a string passed by reference.|
|ft_putchar_fd|Prints a character to the file descriptor.|
|ft_putstr_fd|Prints a string to the file descriptor.|
|ft_putendl_fd|Prints a string to the file descriptor with a newline.|
|ft_putnbr_fd|Prints a number to the file descriptor.|

#### Linked list

|Name|Description|
|---|---|
|ft_lstnew|Creates a new node and initializes its content.|
|ft_lstadd_front|Adds a node at the beginning of a list.|
|ft_lstsize|Counts the number of nodes in a list.|
|ft_lstlast|Returns the last node of the list.|
|ft_lstadd_back|Adds a node at the end of a list.|
|ft_lstdelone|Deletes a node.|
|ft_lstclear|Deletes a node and all the succeeding nodes.|
|ft_lstiter|Applies a function to the content of each node of a list.|
|ft_lstmap|Creates a copy of a list. A function is applied to each of its nodes.|

<!--## Roadmap-->
<!--## Contributing-->
<!--## License-->
<!--## Contact-->
<!--## Aknowledgements-->

---
*42 is a coding school that emphasizes on project-based learning and peer-to-peer education.*

*The project complies with the 42 norm. The latest norm can be found on the [42 intra site](https://meta.intra.42.fr/articles/the-norm-v4) (requires authentication)*.