/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetramino_templates_L.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 19:33:17 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/25 19:33:18 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*create_L0(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 0;
	piece->box2y = 1;
	piece->box2x = 0;
	piece->box3y = 2;
	piece->box3x = 0;
	piece->box4y = 2;
	piece->box4x = 1;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece *create_L1(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 0;
	piece->box2y = 0;
	piece->box2x = 1;
	piece->box3y = 0;
	piece->box3x = 2;
	piece->box4y = 1;
	piece->box4x = 0;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece *create_L2(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 0;
	piece->box2y = 0;
	piece->box2x = 1;
	piece->box3y = 1;
	piece->box3x = 1;
	piece->box4y = 2;
	piece->box4x = 1;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_L3(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 2;
	piece->box2y = 1;
	piece->box2x = 0;
	piece->box3y = 1;
	piece->box3x = 1;
	piece->box4y = 1;
	piece->box4x = 2;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}
