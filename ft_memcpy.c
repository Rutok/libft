/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 21:20:03 by nboste            #+#    #+#             */
/*   Updated: 2016/10/07 15:03:55 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *s;
    char *d;

    s = (char *)src;
    d = (char *)dest;
    while (n--)
        *d++ = *s++;
    return (dest);
}