/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_legality.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 14:10:00 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/10 14:10:02 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_legality(char *str, t_piece *piece, size_t n)
{
	size_t i;
	size_t a;
	size_t b;
	size_t c;
	size_t d;

	i = piece->offset;
	a = box1_loc(piece) + i;
	b = box2_loc(piece, n) + i;
	c = box3_loc(piece, n) + i;
	d = box4_loc(piece, n) + i;
	if (DOT(str[a], str[b], str[c], str[d]))
		return (1);
	return (0);
}
