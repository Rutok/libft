/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 18:15:05 by nboste            #+#    #+#             */
/*   Updated: 2016/10/08 11:28:14 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *h, const char *n)
{
	char	*oc;
	char	*t_n;

	if (!*n)
		return ((char *)h);
	while (*h)
	{
		t_n = (char *)n;
		while (*h && *t_n != *h)
			h++;
		oc = (char *)h;
		while (*h && *t_n && *h == *t_n)
		{
			h++;
			t_n++;
		}
		if (*t_n == '\0')
			return (oc);
		else
			h = (const char *)(oc + 1);
	}
	return (NULL);
}
