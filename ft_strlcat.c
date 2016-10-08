/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 17:19:56 by nboste            #+#    #+#             */
/*   Updated: 2016/10/08 11:24:47 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (dest[i] && i < size)
		i++;
	if (i == (size - 1) && dest[i] != '\0')
		return (size);
	while (*src && i < (size - 1))
		dest[i++] = *src++;
	dest[i] = '\0';
	return (i);
}
