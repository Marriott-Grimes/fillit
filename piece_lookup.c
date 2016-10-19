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

t_piece	*create_piece(char *c, int n)
{
	t_piece *piece;

	piece = (t_piece *)malloc(sizeof(t_piece));
	if (!piece)
		return (NULL);
	if (!ft_strcmp(c,"L_0"))
		return (create_L0(n, piece));
	if (!ft_strcmp(c,"L_1"))
		return (create_L1(n, piece));
	if (!ft_strcmp(c,"L_2"))
		return (create_L2(n, piece));
	if (!ft_strcmp(c,"L_3"))
		return (create_L3(n, piece));
	if (!ft_strcmp(c,"RL0"))
		return (create_rL0(n, piece));
	if (!ft_strcmp(c,"RL1"))
		return (create_rL1(n, piece));
	if (!ft_strcmp(c,"RL2"))
		return (create_rL2(n, piece));
	if (!ft_strcmp(c,"RL3"))
		return (create_rL3(n, piece));
	else
		return (create_piece_part_2(c, n, piece));
}
	
t_piece	*create_piece_part_2(char *c, int n, t_piece *piece)
{
	if (!ft_strcmp(c,"T_0"))
		return (create_T0(n, piece));
	if (!ft_strcmp(c,"T_1"))
		return (create_T1(n, piece));
	if (!ft_strcmp(c,"T_2"))
		return (create_T2(n, piece));
	if (!ft_strcmp(c,"T_3"))
		return (create_T3(n, piece));
	if (!ft_strcmp(c,"S_0"))
		return (create_S0(n, piece));
	if (!ft_strcmp(c,"S_1"))
		return (create_S1(n, piece));
	if (!ft_strcmp(c,"Z_0"))
		return (create_Z0(n, piece));
	if (!ft_strcmp(c,"Z_1"))
		return (create_Z1(n, piece));
	if (!ft_strcmp(c,"I_0"))
		return (create_I0(n, piece));
	if (!ft_strcmp(c,"I_1"))
		return (create_I1(n, piece));
	if (!ft_strcmp(c,"SQ_"))
		return (create_SQ(n, piece));
	ft_putstr("u fukd up");
	return(NULL);
}
