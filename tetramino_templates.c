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

t_piece	*create_rL0(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 1;
	piece->box2y = 1;
	piece->box2x = 1;
	piece->box3y = 2;
	piece->box3x = 0;
	piece->box4y = 2;
	piece->box4x = 1;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_rL1(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 0;
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

t_piece *create_rL2(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 0;
	piece->box2y = 1;
	piece->box2x = 1;
	piece->box3y = 1;
	piece->box3x = 0;
	piece->box4y = 2;
	piece->box4x = 0;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece *create_rL3(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 0;
	piece->box2y = 0;
	piece->box2x = 1;
	piece->box3y = 0;
	piece->box3x = 2;
	piece->box4y = 1;
	piece->box4x = 2;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_T0(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 0;
	piece->box2y = 0;
	piece->box2x = 1;
	piece->box3y = 0;
	piece->box3x = 2;
	piece->box4y = 1;
	piece->box4x = 1;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_T1(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 1;
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

t_piece *create_T2(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 1;
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

t_piece *create_T3(t_piece *piece)
{
	piece->offset = 0;
	piece->box1x = 0;
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

t_piece	*create_I0(t_piece *piece)
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

t_piece	*create_I1(t_piece *piece)
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

t_piece	*create_SQ(t_piece *piece)
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


