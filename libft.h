#ifndef FT_LIBRARY_H
#define FT_LIBRARY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n); //test it well
void	*ft_memccpy(void *dst, const void *src, int c, size_t n); //test it well
void	*ft_memmove(void *dst, const void *src, size_t len); //test it + overlapsing
void	*ft_memchr(const void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif