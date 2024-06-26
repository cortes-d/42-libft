# 42-libft

## About
Own implementation of some standard C library functions, non-standard functions including functions to manage linked lists.

### Note
- The library serves as a basis for other projects.
- The goal is to continuously improve it and eventually add new functions.

<!--
## Getting started
### Prerequisites
### Installation
-->

## Usage

### Categories

In **bold** are the mandatory functions of the libft.
In regular are the extra functions added later on to enhance the library.

1. Function from `<ctype.h>`.  
2. Function from `<string.h>`.  
3. Function from `<stdlib.h>`.  
4. Non-standard function.
5. Linked list function.

### Functions

|Name|Description|Cat.|
|---|---|---|
|**ft_isalpha**|Checks whether the given character is an alphabetic letter.|1|
|**ft_isdigit**|Checks whether the given character is a digit.|1|
|ft_isxdigit|Checks whether the given character is a hexadecimal digit.|1|
|**ft_isalnum**|Checks whether the given character is an alphabetic letter *or* a digit.|1|
|**ft_isascii**|Checks whether the given character is an ASCII character.|1|
|**ft_isprint**|Checks whether the given character is a printable one.|1|
|ft_isspace|Checks whether the given character is a white-space character.|1|
|**ft_islower**|Checks whether the given character is in lowercase.|1|
|**ft_isupper**|Checks whether the given character is in uppercase.|1|
|**ft_tolower**|Transforms an uppercase character to lowercase.|1|
|**ft_toupper**|Transforms a lowercase character to uppercase.|1|
|**ft_strlen**|Returns the length of a string.|2|
|**ft_memset**|Fills the pointed memory with a constant byte *n* times.|2|
|**ft_bzero**|Fills the pointed memory with zeros *n* times.|2|
|**ft_memcpy**|Copies *n* bytes from the source to the destination.|2|
|**ft_strlcpy**|Copies *n* bytes from the source to the destination and NUL-terminate the result.|2|
|**ft_strlcat**|Concatenates the source to the destination and NUL-terminate the result.|2|
|**ft_strchr**|Finds the first occurrence of the given character in the string.|2|
|**ft_strrchr**|Finds the last occurrence of the given character in the string.|2|
|**ft_strncmp**|Compares the first *n* characters of two strings.|2|
|**ft_memchr**|Finds the first occurrence of the character in the pointed memory.|2|
|**ft_memcmp**|Compares the first *n* bytes of two areas in memory.|2|
|**ft_strnstr**|Finds the first occurrence of a keyword in the first *n* characters of the string.|2|
|**ft_strdup**|Duplicates a string.|2|
|**ft_atoi**|Converts a number in string format to an integer.|3|
|ft_atoi_base|Converts a number in string format to an integer using the base defined by the provided charset.|4|
|**ft_calloc**|Dynamically allocates memory and fills it with zero bytes.|3|
|**ft_substr**|Returns a substring defined by a starting index and a length.|4|
|**ft_strjoin**|Concatenates two strings.|4|
|**ft_strtrim**|Removes the characters defined in the set at the beginning and end of the string.|4|
|**ft_split**|Extracts the substrings delimited by a given character.|4|
|**ft_itoa**|Converts an integer to a string.|4|
|**ft_strmapi**|Applies a function to each character of a string.|4|
|**ft_striteri**|Applies a function to each character of a string passed by reference.|4|
|**ft_putchar_fd**|Prints a character to the file descriptor.|4|
|**ft_putstr_fd**|Prints a string to the file descriptor.|4|
|**ft_putendl_fd**|Prints a string to the file descriptor with a newline.|4|
|**ft_putnbr_fd**|Prints a number to the file descriptor.|4|
|**ft_lstnew**|Creates a new node and initializes its content.|5|
|**ft_lstadd_front**|Adds a node at the beginning of a list.|5|
|**ft_lstsize**|Counts the number of nodes in a list.|5|
|**ft_lstlast**|Returns the last node of the list.|5|
|**ft_lstadd_back**|Adds a node at the end of a list.|5|
|**ft_lstdelone**|Deletes a node.|5|
|**ft_lstclear**|Deletes a node and all the succeeding nodes.|5|
|**ft_lstiter**|Applies a function to the content of each node of a list.|5|
|**ft_lstmap**|Creates a copy of a list. A function is applied to each of its nodes.|5|


<!--## Roadmap-->
<!--## Contributing-->
<!--## License-->
<!--## Contact-->
<!--## Aknowledgements-->

---
*42 is a coding school that emphasizes on project-based and peer-to-peer learning.*

*The project complies with the 42 norm. The latest norm can be found on the [42 repository](https://github.com/42School/norminette/tree/master/pdf)*.