/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 20:19:21 by nboste            #+#    #+#             */
/*   Updated: 2016/10/08 20:37:53 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*new;
	size_t	i;

	new = ft_strdup(s);
	i = 0;
	while (new && new[i])
	{
		new[i] = f(new[i]);
		i++;
	}
	return (new);
}
