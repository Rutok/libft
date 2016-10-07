/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 17:46:36 by nboste            #+#    #+#             */
/*   Updated: 2016/10/07 17:47:46 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char    *ret;

    ret = NULL;
    while (*s)
    {
        if (*s == (char)c)
            ret = (char *)s;
        s++;
    }
    if ((char)c == '\0')
        return ((char *)s);
    return (ret);
}
