/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece_lookup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 14:10:14 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/10 14:10:16 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece		*create_piece(char *c)
{
	t_piece *piece;

	piece = (t_piece *)malloc(sizeof(t_piece));
	if (!piece)
		return (NULL);
	if (!ft_strcmp(c, "L0"))
		return (create_l0(piece));
	if (!ft_strcmp(c, "L1"))
		return (create_l1(piece));
	if (!ft_strcmp(c, "L2"))
		return (create_l2(piece));
	if (!ft_strcmp(c, "L3"))
		return (create_l3(piece));
	if (!ft_strcmp(c, "J0"))
		return (create_j0(piece));
	if (!ft_strcmp(c, "J1"))
		return (create_j1(piece));
	if (!ft_strcmp(c, "J2"))
		return (create_j2(piece));
	if (!ft_strcmp(c, "J3"))
		return (create_j3(piece));
	else
		return (create_piece_part_2(c, piece));
}

t_piece		*create_piece_part_2(char *c, t_piece *piece)
{
	if (!ft_strcmp(c, "T0"))
		return (create_t0(piece));
	if (!ft_strcmp(c, "T1"))
		return (create_t1(piece));
	if (!ft_strcmp(c, "T2"))
		return (create_t2(piece));
	if (!ft_strcmp(c, "T3"))
		return (create_t3(piece));
	if (!ft_strcmp(c, "S0"))
		return (create_s0(piece));
	if (!ft_strcmp(c, "S1"))
		return (create_s1(piece));
	if (!ft_strcmp(c, "Z0"))
		return (create_z0(piece));
	if (!ft_strcmp(c, "Z1"))
		return (create_z1(piece));
	if (!ft_strcmp(c, "I0"))
		return (create_i0(piece));
	if (!ft_strcmp(c, "I1"))
		return (create_i1(piece));
	if (!ft_strcmp(c, "SQ"))
		return (create_sq(piece));
	return (NULL);
}
