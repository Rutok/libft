/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 20:54:49 by nboste            #+#    #+#             */
/*   Updated: 2016/10/07 21:01:37 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    char    *new;

    if (!(new = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
        return (NULL);
    ft_strcpy(new, s1);
    ft_strcat(new, s2);
    return (new);
}
