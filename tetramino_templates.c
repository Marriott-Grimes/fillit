/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetramino_templates.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 16:14:43 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/10 16:14:44 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*create_i0(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 0;
	piece->box2y = 1;
	piece->box2x = 0;
	piece->box3y = 2;
	piece->box3x = 0;
	piece->box4y = 3;
	piece->box4x = 0;
	piece->height = 4;
	piece->width = 1;
	return (piece);
}

t_piece	*create_i1(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 0;
	piece->box2y = 0;
	piece->box2x = 1;
	piece->box3y = 0;
	piece->box3x = 2;
	piece->box4y = 0;
	piece->box4x = 3;
	piece->height = 1;
	piece->width = 4;
	return (piece);
}

t_piece	*create_sq(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 0;
	piece->box2y = 0;
	piece->box2x = 1;
	piece->box3y = 1;
	piece->box3x = 0;
	piece->box4y = 1;
	piece->box4x = 1;
	piece->height = 2;
	piece->width = 2;
	return (piece);
}
