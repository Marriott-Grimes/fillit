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

t_piece	*create_L0(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 0;
	piece->box2 = n;
	piece->box3 = 2 * n;
	piece->box4 = 2 * n + 1;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece *create_L1(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 0;
	piece->box2 = 1;
	piece->box3 = 2;
	piece->box4 = n;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece *create_L2(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 0;
	piece->box2 = 1;
	piece->box3 = n + 1;
	piece->box4 = 2 * n + 1;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_L3(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 2;
	piece->box2 = n;
	piece->box3 = n + 1;
	piece->box4 = n + 2;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_rL0(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 1;
	piece->box2 = n + 1;
	piece->box3 = 2 * n;
	piece->box4 = 2 * n + 1;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_rL1(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 0;
	piece->box2 = n;
	piece->box3 = n + 1;
	piece->box4 = n + 2;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece *create_rL2(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 0;
	piece->box2 = 1;
	piece->box3 = n;
	piece->box4 = 2 * n;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece *create_rL3(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 0;
	piece->box2 = 1;
	piece->box3 = 2;
	piece->box4 = n + 2;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_T0(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 0;
	piece->box2 = 1;
	piece->box3 = 2;
	piece->box4 = n + 1;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_T1(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 1;
	piece->box2 = n;
	piece->box3 = n + 1;
	piece->box4 = 2 * n + 1;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece *create_T2(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 1;
	piece->box2 = n;
	piece->box3 = n + 1;
	piece->box4 = n + 2;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece *create_T3(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 0;
	piece->box2 = n;
	piece->box3 = n + 1;
	piece->box4 = 2 * n;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_S0(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 1;
	piece->box2 = 2;
	piece->box3 = n;
	piece->box4 = n + 1;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_S1(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 0;
	piece->box2 = n;
	piece->box3 = n + 1;
	piece->box4 = 2 * n + 1;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_Z0(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 0;
	piece->box2 = 1;
	piece->box3 = n + 1;
	piece->box4 = n + 2;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_Z1(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 1;
	piece->box2 = n;
	piece->box3 = n + 1;
	piece->box4 = 2 * n;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_I0(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 0;
	piece->box2 = n;
	piece->box3 = 2 * n;
	piece->box4 = 3 * n;
	piece->n = n;
	piece->height = 4;
	piece->width = 1;
	return (piece);	
}

t_piece	*create_I1(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 0;
	piece->box2 = 1;
	piece->box3 = 2;
	piece->box4 = 3;
	piece->n = n;
	piece->height = 1;
	piece->width = 4;
	return (piece);	
}

t_piece	*create_SQ(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = 0;
	piece->box2 = 1;
	piece->box3 = n;
	piece->box4 = n + 1;
	piece->n = n;
	piece->height = 2;
	piece->width = 2;
	return (piece);	
}


