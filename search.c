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

t_flagged_string	erase_piece(t_flagged_string ans, t_piece **tet_list,
	size_t i, size_t n)
{
	tet_list[i]->offset = 0;
	if (i == 0)
	{
		ans.index = -2;
	}
	else
	{
		ans.str = write_to_string(ans.str, tet_list[i - 1], '.', n);
		tet_list[i - 1] = inc_right(tet_list[i - 1], n);
		ans.index = i - 1;
	}
	return (ans);
}

t_flagged_string	search(char *output, t_piece **tet_list, size_t i, size_t n)
{
	t_piece				*piece;
	t_flagged_string	ans;

	ans.str = output;
	if (tet_list[i] != NULL)
	{
		piece = tet_list[i];
		while (box4_loc(tet_list[i], n) + tet_list[i]->offset < n * n)
		{
			if (!check_legality(ans.str, tet_list[i], n))
				tet_list[i] = inc_right(tet_list[i], n);
			else
			{
				ans.str = write_to_string(ans.str, tet_list[i], 'A' + i, n);
				ans.index = i + 1;
				return (ans);
			}
		}
		ans = erase_piece(ans, tet_list, i, n);
		return (ans);
	}
	ans.index = -1;
	return (ans);
}
