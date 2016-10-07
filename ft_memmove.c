/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 21:20:10 by nboste            #+#    #+#             */
/*   Updated: 2016/10/07 15:13:06 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *buffer;
    char    *d;
    char    *s;
    size_t  l;
    size_t  i;

    buffer = (char *)malloc(n);
    d = (char *)dest;
    s = (char *)src;
    l = n;
    i = 0;
    while (l--)
        buffer[i++] = *s++;
    i = 0;
    while (n--)
        *d++ = buffer[i++];
    free(buffer);
    return (dest);
}
