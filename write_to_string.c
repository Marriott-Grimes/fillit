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

	i = piece->offset;
	ans[piece->box1 + i] = c;
	ans[piece->box2 + i] = c;
	ans[piece->box3 + i] = c;
	ans[piece->box4 + i] = c;
	return (ans);
}
