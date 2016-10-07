/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 21:05:15 by nboste            #+#    #+#             */
/*   Updated: 2016/10/07 21:18:13 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char    *ft_strtrim(const char *s)
{
    size_t  beg;
    size_t  end;
    size_t  i;

    i = 0;
    while (!s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
        i++;
    beg = i;
    end = i++;
    while (s[i])
    {
        if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
            end = i;
        i++;
    }
    return (ft_strsub(s, (unsigned int)beg, end - beg));
}