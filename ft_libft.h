/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 21:21:09 by nboste            #+#    #+#             */
/*   Updated: 2016/10/07 17:07:59 by nboste           ###   ########.fr       */
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

#endif
