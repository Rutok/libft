/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 20:15:50 by nboste            #+#    #+#             */
/*   Updated: 2016/10/07 20:17:45 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t  i;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
