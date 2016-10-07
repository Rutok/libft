/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 21:49:01 by nboste            #+#    #+#             */
/*   Updated: 2016/10/07 22:11:14 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_get_str_size(int n)
{
    size_t  i;
    size_t  neg;

    i = 0;
    neg = n < 0 ? 1 : 0;
    while (n)
    {
        i++;
        n = n / 10;
    }
    return (i + neg);
}

char    *ft_zero_str()
{
    char *s;

    if (!(s = (char *)malloc(2)))
        return (NULL);
    s[0] = '0';
    s[1] = '\0';
    return (s);
}

char    *ft_itoa(int n)
{
    char    *str;
    int     i;
    int     neg;

    if (n == 0)
        return ft_zero_str();
    i = ft_get_str_size(n);
    if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    str[i] = '\0';
    i = 0;
    neg = n < 0 ? 1 : 0;
    n = n < 0 ? n * -1 : n;
    if (neg)
        str[i++] = '-';
    while (n)
    {
        str[i++] = n % 10 + '0';
        n = n / 10;
    }
    if (neg)
        ft_strrev(str + 1, 0);
    else
        ft_strrev(str, 0);
    return (str);
}
