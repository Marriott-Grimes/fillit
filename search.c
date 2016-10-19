/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 14:16:30 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/10 14:16:31 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*search(char *ans, t_piece **tet_list, size_t i, size_t n)
{
	t_piece *piece;

	piece = NULL;
	tet_list = update_box_size(tet_list, n);
	if (tet_list[i] != NULL)
	{
		piece = tet_list[i];
		while (!check_legality(ans, piece) && (piece->box4)(n) + piece->offset < n * n)
		{
			piece = inc_right(piece, n);
		}
		if (check_legality(ans, piece))
		{
			ft_putnbr(i);
			ft_putstr("count this\n");
			ans = write_to_string(ans, piece, 'A' + i);
			return (search(ans, tet_list, i + 1, n));
		}
		else
		{
			ft_putstr("about to backtrack\n");
			piece->offset = 0;
			if (i == 0)
				return (NULL);
			ans = write_to_string(ans, tet_list[i - 1], '.');
			tet_list[i - 1] = inc_right(tet_list[i - 1], n);
			return (search(ans, tet_list, i - 1, n));
		}
	}
	return (ans);
}
