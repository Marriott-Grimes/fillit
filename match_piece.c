/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_piece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 21:05:54 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/21 13:36:46 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char **g_final_pieces;

int		match_found(char *pieces, int i)
{
	int		j;
	int		k;
	char	**arr;

	j = 0;
	while (j < 19)
	{
		arr = which_global_array(j);
		k = 0;
		while (arr[k])
		{
			if (!ft_strncmp(arr[k], pieces, 20))
			{
				insert_id(j, i);
				return (1);
			}
			k++;
		}
		j++;
	}
	return (0);
}

void	match_piece(char *pieces)
{
	int		i;

	g_final_pieces = (char **)malloc(sizeof(char *) * (g_piece_count + 1));
	i = 0;
	while (i < g_piece_count)
	{
		if (!match_found(pieces, i))
		{
			errors(1);
			exit(EXIT_FAILURE);
		}
		i++;
		pieces += 21;
	}
	g_final_pieces[i] = NULL;
}
