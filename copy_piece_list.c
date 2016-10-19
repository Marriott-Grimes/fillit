/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_piece_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/15 13:18:55 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/15 13:18:56 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece		**copy_piece_list(char **list, t_piece **tet_list, size_t n)
{
	int i;

	i = 0;
	while (list[i])
	{
		tet_list[i] = create_piece(list[i], n);
		i++;
	}
	tet_list[i] = NULL;
	return (tet_list);
}
