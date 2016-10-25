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

t_piece	*create_piece(char *c)
{
	t_piece *piece;

	piece = (t_piece *)malloc(sizeof(t_piece));
	if (!piece)
		return (NULL);
	if (!ft_strcmp(c,"L0"))
		return (create_L0(piece));
	if (!ft_strcmp(c,"L1"))
		return (create_L1(piece));
	if (!ft_strcmp(c,"L2"))
		return (create_L2(piece));
	if (!ft_strcmp(c,"L3"))
		return (create_L3(piece));
	if (!ft_strcmp(c,"J0"))
		return (create_rL0(piece));
	if (!ft_strcmp(c,"J1"))
		return (create_rL1(piece));
	if (!ft_strcmp(c,"J2"))
		return (create_rL2(piece));
	if (!ft_strcmp(c,"J3"))
		return (create_rL3(piece));
	else
		return (create_piece_part_2(c, piece));
}
	
t_piece	*create_piece_part_2(char *c, t_piece *piece)
{
	if (!ft_strcmp(c,"T0"))
		return (create_T0(piece));
	if (!ft_strcmp(c,"T1"))
		return (create_T1(piece));
	if (!ft_strcmp(c,"T2"))
		return (create_T2(piece));
	if (!ft_strcmp(c,"T3"))
		return (create_T3(piece));
	if (!ft_strcmp(c,"S0"))
		return (create_S0(piece));
	if (!ft_strcmp(c,"S1"))
		return (create_S1(piece));
	if (!ft_strcmp(c,"Z0"))
		return (create_Z0(piece));
	if (!ft_strcmp(c,"Z1"))
		return (create_Z1(piece));
	if (!ft_strcmp(c,"I0"))
		return (create_I0(piece));
	if (!ft_strcmp(c,"I1"))
		return (create_I1(piece));
	if (!ft_strcmp(c,"SQ"))
		return (create_SQ(piece));
	ft_putstr("u fukd up\n");
	return(NULL);
}
