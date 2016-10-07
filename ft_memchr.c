/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 15:56:38 by nboste            #+#    #+#             */
/*   Updated: 2016/10/07 16:05:01 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *b;
    unsigned char f;

    b = (unsigned char *)s;
    f = (unsigned char)c;
    while (n--)
    {
        if (*b == f)
            return ((void *)b);
        b++;
    }
    return (NULL);
}
