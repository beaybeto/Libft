# Libft
The objective of this project is to create my own library that includes the most common functions used when programming in C#

  - **Memset**. Copies the character c (an *unsigned char*) to the first len characters of b.
```
void *memset(void *b, int c, size_t len)
```
It is necessary to **cast** b to char *. Void *b is a pointer that can point to any data type, but to perform byte-by-byte operations in memory, it needs to be treated as char *, since the characters occupy a single byte of memory. 

To do the casting: 
```
char *ptr = (char *)b
```
Due to the function is declared as void *, it must have return statement inside it.
  - **Memcpy**. Copies n bytes from the source memory (src) to the destination memory (dst). If both memories overlap, the behavior is undefined.
```
void *memcpy(void *dst, const void *src, size_t n)
```
A pointer to the original destination address (before the cpy) is returned.
  - **Memmove**. Copies len bytes from source memory (src) to destination memory (dst). Controls string overlapping, THIS HAPPENS WHEN THE ORIGIN IS TO THE LEFT OF DESTINATION AND OVERLAPPED. In this case it starts copying from the end instead of the beginning.
```
void *memmove(void *dst, const void *src, size_t len)
```
  - **Strlcpy**. Copies dstsize -1 characters from src to dst (mashing what is in dst) and guaranteeing NUL termination. It returns the length of the string it is trying to copy, i.e. src (regardless of how many characters are copied)

dstsize = target length (must have enough space to copy the whole src and include the NUL)
```
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
```
  - **Strlcat**. Appends src to the end of dst. Appends at most dstsize - strlen(dst) - 1.

dstsize = length of the final string (must have enough space to be able to concatenate src and add the NUL slash). Guarantees NUL termination except if dstsize = 0, or strlen(dst) > dstsize. The function returns the length of the string you are trying to create, i.e. the sum of length dst + src
```
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
```
  - **Strchr**. Locates the first occurrence of c (converted to char) in the string pointed to by s. C may be worth the NUL character, and the function would locate the termination of the string.

Returns the pointer pointing to the located character, or NULL if c does not exist in the string.
```
char	*ft_strchr(const char *s, int c)
```
  - **Strrchr**. Locates the last occurrence of c (converted to char) in the string pointed to by s
  - **Strncmp**. Compares n characters of strings (s1 and s2) lexicographically. The comparison is done using unsigned char. 

WHEN IT REACHES A NULL CHARACTER, IT STOPS, AND IF THE STRINGS WERE EQUAL, IT RETURNS ZERO.
```
int	ft_strncmp(const char *s1, const char *s2, size_t n)
```
  - **Memchr**. Locates a byte in the byte string. Locates the first occurrence of c (converted to *unsigned char*) in the string s.

Returns the pointer to the occurrence, or NUL if it is not found in the selected n bytes.
If the null value (\0) is passed as a character, it returns nothing. The same if you pass an empty string (and c = '\0').
```
void	*ft_memchr(const void *s, int c, size_t n)
```
  - **Memcmp**. Compares n bytes of string s1 to string s2.

The function returns zero if the strings are equal, otherwise it returns the difference between the two differing bytes (treated as unsigned char).
Empty strings are considered identical.

WHEN IT REACHES A NUL CHARACTER IT DOESN'T STOP, IT KEEPS CHECKING THE NEXT CHARACTERS UNTIL IT FINDS A DIFFERENCE AND GIVES IT TO YOU. That's the difference between this function and strncmp
```
int	ft_memcmp(const void *s1, const void *s2, size_t n)
```
  - **Strnstr**. Locates a substring in a string. Locates the first occurrence of the string needle (null-terminated) in the string haystack, where len characters are searched for.
     - If needle is an empty string, haystack is returned.
	- If needle is not found in haystack, NULL is returned.
	- If needle is found in haystack, the pointer pointing to it is returned.
```
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
```
  - **Atoi**. Converts an ASCII string to integer.
    - Returns the number found. If a non-numeric character (letter, ...) is found, it stops and displays the numbers up to that letter.
    - If it cannot convert the string, it returns 0.
    - The first zero is ignored.
    - It takes into account the - and + sign, if it is only one.
    - If it finds space, page break, new line, carriage return, horizontal tab or vertical tab, it ignores them.
    - The minimum value of an int is : -2147483648
    - The maximum value is 2147483647
    - In case of overflow, the return value is not defined.
  ```
int	ft_atoi(const char *str)
```
