/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pairmid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 23:17:40 by nboste            #+#    #+#             */
/*   Updated: 2016/11/14 00:08:24 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_pair	ft_pairmid(t_pair *a, t_pair *b)
{
	t_pair	r;

	r.x = (a->x + b->x) / 2.0;
	r.y = (a->y + b->y) / 2.0;
	return (r);
}