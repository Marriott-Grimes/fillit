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

char	*write_to_string(char *ans, t_piece *piece, char c, size_t n)
{
	size_t i;

	i = piece->offset;
	ans[box1_loc(piece, n) + i] = c;
	ans[box2_loc(piece, n) + i] = c;
	ans[box3_loc(piece, n) + i] = c;
	ans[box4_loc(piece, n) + i] = c;
	return (ans);
}
