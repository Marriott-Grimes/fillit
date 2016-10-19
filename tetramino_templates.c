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
	piece->box1 = zero;
	piece->box2 = npzero;
	piece->box3 = twon;
	piece->box4 = twonpone;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece *create_L1(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = zero;
	piece->box2 = one;
	piece->box3 = two;
	piece->box4 = npzero;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece *create_L2(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = zero;
	piece->box2 = one;
	piece->box3 = npone;
	piece->box4 = twonpone;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_L3(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = two;
	piece->box2 = npzero;
	piece->box3 = npone;
	piece->box4 = nptwo;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_rL0(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = one;
	piece->box2 = npone;
	piece->box3 = twon;
	piece->box4 = twonpone;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_rL1(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = zero;
	piece->box2 = npzero;
	piece->box3 = npone;
	piece->box4 = nptwo;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece *create_rL2(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = zero;
	piece->box2 = one;
	piece->box3 = npzero;
	piece->box4 = twon;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece *create_rL3(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = zero;
	piece->box2 = one;
	piece->box3 = two;
	piece->box4 = nptwo;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_T0(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = zero;
	piece->box2 = one;
	piece->box3 = two;
	piece->box4 = npone;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_T1(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = one;
	piece->box2 = npzero;
	piece->box3 = npone;
	piece->box4 = twonpone;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece *create_T2(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = one;
	piece->box2 = npzero;
	piece->box3 = npone;
	piece->box4 = nptwo;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece *create_T3(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = zero;
	piece->box2 = npzero;
	piece->box3 = npone;
	piece->box4 = twon;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_S0(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = one;
	piece->box2 = two;
	piece->box3 = npzero;
	piece->box4 = npone;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_S1(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = zero;
	piece->box2 = npzero;
	piece->box3 = npone;
	piece->box4 = twonpone;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_Z0(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = zero;
	piece->box2 = one;
	piece->box3 = npone;
	piece->box4 = nptwo;
	piece->n = n;
	piece->height = 2;
	piece->width = 3;
	return (piece);	
}

t_piece	*create_Z1(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = one;
	piece->box2 = npzero;
	piece->box3 = npone;
	piece->box4 = twon;
	piece->n = n;
	piece->height = 3;
	piece->width = 2;
	return (piece);	
}

t_piece	*create_I0(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = zero;
	piece->box2 = npzero;
	piece->box3 = twon;
	piece->box4 = threen;
	piece->n = n;
	piece->height = 4;
	piece->width = 1;
	return (piece);	
}

t_piece	*create_I1(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = zero;
	piece->box2 = one;
	piece->box3 = two;
	piece->box4 = three;
	piece->n = n;
	piece->height = 1;
	piece->width = 4;
	return (piece);	
}

t_piece	*create_SQ(int n, t_piece *piece)
{
	piece->offset = 0;
	piece->box1 = zero;
	piece->box2 = one;
	piece->box3 = npzero;
	piece->box4 = npone;
	piece->n = n;
	piece->height = 2;
	piece->width = 2;
	return (piece);	
}


