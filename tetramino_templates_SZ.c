/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetramino_templates_SZ.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 19:33:25 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/25 19:33:27 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*create_S0(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 1;
	piece->box2y = 0;
	piece->box2x = 2;
	piece->box3y = 1;
	piece->box3x = 0;
	piece->box4y = 1;
	piece->box4x = 1;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_S1(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 0;
	piece->box2y = 1;
	piece->box2x = 0;
	piece->box3y = 1;
	piece->box3x = 1;
	piece->box4y = 2;
	piece->box4x = 1;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_Z0(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 0;
	piece->box2y = 0;
	piece->box2x = 1;
	piece->box3y = 1;
	piece->box3x = 1;
	piece->box4y = 1;
	piece->box4x = 2;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_Z1(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 1;
	piece->box2y = 1;
	piece->box2x = 0;
	piece->box3y = 1;
	piece->box3x = 1;
	piece->box4y = 2;
	piece->box4x = 0;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}
