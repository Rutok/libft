/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 21:19:58 by nboste            #+#    #+#             */
/*   Updated: 2016/10/07 15:03:46 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char    *d;
    char    *s;

    d = (char *)dest;
    s = (char *)src;
    while (n--)
    {
        *d++ = *s;
        if (*s++ == c)
            return ((void *)d);
    }
    return (NULL);
}
