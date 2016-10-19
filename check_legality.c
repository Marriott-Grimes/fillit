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

int		check_legality(char *str, t_piece *piece)
{
	size_t i;

	i = piece->offset;
	if (DOT(str[piece->box1 + i], str[piece->box2 + i],
		str[piece->box3 + i], str[piece->box4 + i]))
		return (1);
	return (0);
}

