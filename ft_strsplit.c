/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 21:26:57 by nboste            #+#    #+#             */
/*   Updated: 2016/10/08 20:26:23 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_c(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str && *str++ != c)
		i++;
	return (i);
}

static int	count_words_c(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str != '\0')
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

char		**ft_strsplit(const char *s, char c)
{
	int		nb_words;
	char	**tab;
	char	**ret;
	int		i;
	int		j;

	nb_words = count_words_c(s, c);
	if (!(tab = (char **)malloc(sizeof(char*) * (nb_words + 1))))
		return (NULL);
	ret = tab;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		i = ft_strlen_c(s, c);
		if (!(*tab = (char *)malloc(sizeof(char) * (i + 1))))
			return (NULL);
		j = 0;
		while (*s && j < i)
			(*tab)[j++] = *s++;
		if (*s)
			(*tab++)[i] = '\0';
	}
	*tab = 0;
	return (ret);
}
