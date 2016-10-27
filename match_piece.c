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

void	match_piece(char *pieces)
{
	g_final_pieces = (char **)malloc(sizeof(char *) * (g_piece_count + 1));
	int i;
	int j;
	int k;
	int match_found;
	char **arr;

	i = 0;
	while (i < g_piece_count)
	{
		j = 0;
		match_found = 0;
		while (j < 19)
		{
			arr = which_global_array(j);
			k = 0;
			while (arr[k])
			{
				if (!ft_strncmp(arr[k], pieces, 20))
				{
					insert_id(j, i);
					match_found = 1;
				}
				k++;
			}
			j++;
		}
		if (!match_found)
		{
			errors(1);
			exit(EXIT_FAILURE);
		}
		i++;
		pieces += 21;
	}
	g_final_pieces[i] = NULL;
}

// static void	actually_match_pieces()
// {
// 	int i, j, k, l;
// 	char **arr;
// 	//total pieces given
// 	i = 0;
// 	//global pieces arrays
// 	j = 0;
// 	//strings in current global piece array
// 	k = 0;
// 	//max amount of strings in global array
// 	l = 6;
// 	while (i < g_piece_count)
// 	{
// 		j = 0;
// 		while (j < 19)
// 		{
// 			//we fetch our global array containing pieces to base off of (in pieces2/pieces_array.c).
// 			arr = which_global_array(j);
// 			if (j == 0)
// 				l = 4;
// 			else if (j == 12)
// 				l = 9;
// 			else
// 				l = 6;
// 			k = 0;
// 			while (k < l)
// 			{
// 				//compares current piece to the piece we got from our base pieces (in pieces2/pieces_array.c).
// 				if (ft_strcmp(arr[k], sections[i]) == 0)
// 				{
// 					insert_id(j, i);
// 				}
// 				k++;
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	g_final_pieces[i] = NULL;
// }

// static void    make_sections(char *piece)
// {
// 	int i;
// 	int j;
// 	int k;

// 	k = 0;
// 	j = 0;
// 	i = 0;
// 	//starts 2d array with allocating how many spaces it needs.
// 	sections = (char **)malloc(sizeof(char *) * g_piece_count);
//     while  (i < g_piece_count)
//     {
//     	//allocates for size of each piece (not including seperating '\n')
// 		sections[i] = (char *)malloc(20);
//         k = 0;
//         while (k < 20 && piece[j] != '\0')
//         {
//         	//we copy piece over to the specific section we're on.
//             sections[i][k] = piece[j];
//             j++;
//             k++;
//         }
// 		sections[i][k] = '\0';
//         j++;
//         i++;
//     }
// }

// void	match_piece(char *piece)
// {
// 	g_final_pieces = (char **)malloc(sizeof(char *) * g_piece_count + 1);
// 	make_sections(piece);
// 	actually_match_pieces();
// }
