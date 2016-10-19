/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc_right.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 14:16:23 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/10 14:16:25 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*inc_right(t_piece *piece, size_t n)
{
	size_t i;

	i = 1;
	while ((piece->offset + i) % n > n - piece->width)
	{
		i++;
	}
	piece->offset = piece->offset + i;
	return (piece);
}
