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

int	box1_loc(t_piece *piece, size_t n)
{
	return (piece->box1m * n + piece->box1b);
}

int	box2_loc(t_piece *piece, size_t n)
{
	return (piece->box2m * n + piece->box2b);
}

int	box3_loc(t_piece *piece, size_t n)
{
	return (piece->box3m * n + piece->box3b);
}

int	box4_loc(t_piece *piece, size_t n)
{
	return (piece->box4m * n + piece->box4b);
}

// int	zero(int n)
// {
// 	(void)n;
// 	return (0);
// }

// int one(int n)
// {
// 	(void)n;
// 	return (1);
// }

// int two(int n)
// {
// 	(void)n;
// 	return (2);
// }

// int three(int n)
// {
// 	(void)n;
// 	return (2);
// }

// int npzero(int n)
// {
// 	return (n);
// }

// int npone(int n)
// {
// 	return (n + 1);
// }

// int nptwo(int n)
// {
// 	return (n + 2);
// }

// int twon(int n)
// {
// 	return (2 * n);
// }

// int twonpone(int n)
// {
// 	return (2 * n + 1);
// }

// int threen(int n)
// {
// 	return (3 * n);
// }
