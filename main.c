/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 18:02:59 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/10 18:03:00 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*g_i_0[5];
char	*g_i_1[5];
char	*g_l_0[7];
char	*g_l_1[7];
char	*g_l_2[7];
char	*g_l_3[7];
char	*g_l_4[7];
char	*g_j_0[7];
char	*g_j_1[7];
char	*g_j_2[7];
char	*g_j_3[7];
char	*g_s_0[7];
char	*g_s_1[7];
char	*g_sq_[10];
char	*g_t_0[7];
char	*g_t_1[7];
char	*g_t_2[7];
char	*g_t_3[7];
char	*g_z_0[7];
char	*g_z_1[7];
int		g_piece_count;

void	twenny_five_lines_lol(int argc, char **argv)
{
	if (argc != 2)
	{
		errors(2);
		exit(EXIT_FAILURE);
	}
	pieces_init();
	start_read(argv);
}

int		main(int argc, char **argv)
{
	t_flagged_string	output;
	t_piece				**tet_list;
	size_t				n;

	twenny_five_lines_lol(argc, argv);
	n = 2 * ft_sqrt(g_piece_count) - 1;
	output.str = new_box(n);
	output.index = 0;
	tet_list = (t_piece **)malloc(sizeof(t_piece *) * (g_piece_count + 1));
	tet_list = copy_piece_list(g_final_pieces, tet_list);
	while (output.index != -1)
	{
		output = search(output.str, tet_list, output.index, n);
		if (output.index == -2)
		{
			free(output.str);
			n++;
			output.str = new_box(n);
			output.index = 0;
		}
	}
	putbox(output.str, n);
	return (0);
}
