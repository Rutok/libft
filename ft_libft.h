/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 21:21:09 by nboste            #+#    #+#             */
/*   Updated: 2016/10/07 22:28:34 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

void    *ft_memset(void *s, int c, size_t n);

void    ft_bzero(void *s, size_t n);

void    *ft_memcpy(void *dest, const void *src, size_t n);

void    *ft_memccpy(void *dest, const void *src, int c, size_t n);

void    *ft_memchr(const void *s, int c, size_t n);

int     ft_memcmp(const void *m1, const void *m2, size_t n);

size_t  ft_strlen(const char *str);

char    *ft_strdup(const char *str);

char    *ft_strcpy(char *dest, const char *src);

char    *ft_strncpy(char *dest, const char *src, size_t n);

char    *ft_strcat(char *dest, const char *src);

char    *ft_strncat(char *dest, const char *src, size_t n);

size_t  ft_strlcat(char *dest, const char *src, size_t size);

char    *ft_strchr(const char *s, int c);

char    *ft_strrchr(const char *s, int c);

char    *ft_strstr(const char *big, const char *little);

char    *ft_strnstr(const char *big, const char *little, size_t len);

int     ft_strcmp(const char *s1, const char *s2);

int     ft_strncmp(const char *s1, const char *s2, size_t n);

int     ft_atoi(const char *str);

int     ft_isalpha(int c);

int     ft_isdigit(int c);

int     ft_isalnum(int c);

int     ft_isascii(int c);

int     ft_isprint(int c);

int     ft_toupper(int c);

int     ft_tolower(int c);

void    *ft_memalloc(size_t size);

void    ft_memdel(void **ap);

char    *ft_strnew(size_t size);

void    ft_strdel(char **as);

void    ft_strclr(char *s);

void    ft_striter(char *s, void (*f)(char *));

void    ft_striteri(char *s, void (*f)(unsigned int, char *));

char    *ft_strmap(const char *s, char (*f)(char));

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char));

int     ft_strequ(const char *s1, const char *s2);

int     ft_strnequ(const char *s1, const char *s2, size_t n);

char    *ft_strsub(const char *s, unsigned int start, size_t len);

char    *ft_strjoin(const char *s1, const char *s2);

char    *ft_strtrim(const char *s);

char    **ft_strsplit(const char *s, char c);

char    *ft_itoa(int n);

void    ft_putchar(char c);

void    ft_putstr(const char *s);

void    ft_putendl(const char *s);

void    ft_putnbr(int nb);

void    ft_putchar_fd(char c, int fd);

void    ft_putstr_fd(const char *s, int fd);

void    ft_putendl_fd(const char *s, int fd);

void    ft_putnbr_fd(int n, int fd);

void    ft_strrev(char *str, int idx);

#endif
