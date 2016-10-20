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
	piece->box1m = 0;
	piece->box1b = 0;
	piece->box2m = 1;
	piece->box2b = 0;
	piece->box3m = 2;
	piece->box3b = 0;
	piece->box4m = 2;
	piece->box4b = 1;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece *create_L1(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 0;
	piece->box2m = 0;
	piece->box2b = 1;
	piece->box3m = 0;
	piece->box3b = 2;
	piece->box4m = 1;
	piece->box4b = 0;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece *create_L2(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 0;
	piece->box2m = 0;
	piece->box2b = 1;
	piece->box3m = 1;
	piece->box3b = 1;
	piece->box4m = 2;
	piece->box4b = 1;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_L3(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 2;
	piece->box2m = 1;
	piece->box2b = 0;
	piece->box3m = 1;
	piece->box3b = 1;
	piece->box4m = 1;
	piece->box4b = 2;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_rL0(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 1;
	piece->box2m = 1;
	piece->box2b = 1;
	piece->box3m = 2;
	piece->box3b = 0;
	piece->box4m = 2;
	piece->box4b = 1;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_rL1(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 0;
	piece->box2m = 1;
	piece->box2b = 0;
	piece->box3m = 1;
	piece->box3b = 1;
	piece->box4m = 1;
	piece->box4b = 2;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece *create_rL2(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 0;
	piece->box2m = 1;
	piece->box2b = 1;
	piece->box3m = 1;
	piece->box3b = 0;
	piece->box4m = 2;
	piece->box4b = 0;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece *create_rL3(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 0;
	piece->box2m = 0;
	piece->box2b = 1;
	piece->box3m = 0;
	piece->box3b = 2;
	piece->box4m = 1;
	piece->box4b = 2;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_T0(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 0;
	piece->box2m = 0;
	piece->box2b = 1;
	piece->box3m = 0;
	piece->box3b = 2;
	piece->box4m = 1;
	piece->box4b = 1;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_T1(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 1;
	piece->box2m = 1;
	piece->box2b = 0;
	piece->box3m = 1;
	piece->box3b = 1;
	piece->box4m = 2;
	piece->box4b = 1;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece *create_T2(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 1;
	piece->box2m = 1;
	piece->box2b = 0;
	piece->box3m = 1;
	piece->box3b = 1;
	piece->box4m = 1;
	piece->box4b = 2;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece *create_T3(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 0;
	piece->box2m = 1;
	piece->box2b = 0;
	piece->box3m = 1;
	piece->box3b = 1;
	piece->box4m = 2;
	piece->box4b = 0;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_S0(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 1;
	piece->box2m = 0;
	piece->box2b = 2;
	piece->box3m = 1;
	piece->box3b = 0;
	piece->box4m = 1;
	piece->box4b = 1;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_S1(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 0;
	piece->box2m = 1;
	piece->box2b = 0;
	piece->box3m = 1;
	piece->box3b = 1;
	piece->box4m = 2;
	piece->box4b = 1;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_Z0(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 0;
	piece->box2m = 0;
	piece->box2b = 1;
	piece->box3m = 1;
	piece->box3b = 1;
	piece->box4m = 1;
	piece->box4b = 2;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_Z1(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 1;
	piece->box2m = 1;
	piece->box2b = 0;
	piece->box3m = 1;
	piece->box3b = 1;
	piece->box4m = 2;
	piece->box4b = 0;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_I0(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 0;
	piece->box2m = 1;
	piece->box2b = 0;
	piece->box3m = 2;
	piece->box3b = 0;
	piece->box4m = 3;
	piece->box4b = 0;
	piece->height = 4;
	piece->width = 1;
	return (piece);	
}

t_piece	*create_I1(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 0;
	piece->box2m = 0;
	piece->box2b = 1;
	piece->box3m = 0;
	piece->box3b = 2;
	piece->box4m = 0;
	piece->box4b = 3;
	piece->height = 1;
	piece->width = 4;
	return (piece);	
}

t_piece	*create_SQ(t_piece *piece)
{
	piece->offset = 0;
	piece->box1m = 0;
	piece->box1b = 0;
	piece->box2m = 0;
	piece->box2b = 1;
	piece->box3m = 1;
	piece->box3b = 0;
	piece->box4m = 1;
	piece->box4b = 1;
	piece->height = 2;
	piece->width = 2;
	return (piece);	
}


