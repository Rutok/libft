/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 20:24:46 by nboste            #+#    #+#             */
/*   Updated: 2016/10/07 20:25:41 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char    *new;
    size_t  i;

    new = ft_strdup(s);
    i = 0;
    while(new[i])
    {
        new[i] = f(i, new[i]);
        i++;
    }
    return (new);
}
