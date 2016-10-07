/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 22:15:38 by nboste            #+#    #+#             */
/*   Updated: 2016/10/07 17:10:40 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	char *dst;

	dst = dest;
	while (*dest)
		dest++;
	while (*src && nb--)
		*dest++ = *src++;
	*dest = '\0';
	return (dst);
}
