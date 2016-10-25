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

t_flagged_string	search(char *output, t_piece **tet_list, size_t i, size_t n)
{
	t_piece				*piece;
	t_flagged_string	ans;

	piece = NULL;
	ans.str = output;
	if (tet_list[i] != NULL)
	{
		piece = tet_list[i];
		while (box4_loc(piece, n) + piece->offset < n * n)
		{
			if (!check_legality(ans.str, piece, n))
				piece = inc_right(piece, n);
			else
			{
				ans.str = write_to_string(ans.str, piece, 'A' + i, n);
				tet_list[i]->offset = piece->offset;
				// putbox(ans.str, n);
				// ft_putstr("step forward\n");
				ans.index = i + 1;
				return (ans);
			}
		}
		piece->offset = 0;
		if (i == 0)
		{
			ans.index = -2;
			return (ans);
		}
		ans.str = write_to_string(ans.str, tet_list[i - 1], '.', n);
		tet_list[i - 1] = inc_right(tet_list[i - 1], n);
		// putbox(ans.str, n);
		// ft_putstr("step backward\n");
		ans.index = i - 1;
		return (ans);
	}
	ans.index = -1;
	return (ans);
}
