/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_to_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 14:16:11 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/10 14:16:13 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*write_to_string(char *ans, t_piece *piece, char c)
{
	size_t i;
	size_t n;

	i = piece->offset;
	n = piece->n;
	ans[(piece->box1)(n) + i] = c;
	ans[(piece->box2)(n) + i] = c;
	ans[(piece->box3)(n) + i] = c;
	ans[(piece->box4)(n) + i] = c;
	return (ans);
}
