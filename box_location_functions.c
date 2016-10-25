/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box_location_functions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 17:36:48 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/18 17:36:51 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	box1_loc(t_piece *piece)
{
	return (piece->box1x);
}

int	box2_loc(t_piece *piece, size_t n)
{
	return (piece->box2y * n + piece->box2x);
}

int	box3_loc(t_piece *piece, size_t n)
{
	return (piece->box3y * n + piece->box3x);
}

int	box4_loc(t_piece *piece, size_t n)
{
	return (piece->box4y * n + piece->box4x);
}
