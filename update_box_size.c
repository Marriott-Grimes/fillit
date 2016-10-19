/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_box_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 15:11:14 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/18 15:11:15 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece			**update_box_size(t_piece **tet_list, size_t n)
{
	int i;

	i = 0;
	while (tet_list[i] != NULL)
	{
		tet_list[i]->n = n;
		i++;
	}
	return (tet_list);
}
