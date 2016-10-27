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

char *g_I_0[4 + 1];
char *g_I_1[4 + 1];
char *g_L_0[6 + 1];
char *g_L_1[6 + 1];
char *g_L_2[6 + 1];
char *g_L_3[6 + 1];
char *g_L_4[6 + 1];
char *g_J_0[6 + 1];
char *g_J_1[6 + 1];
char *g_J_2[6 + 1];
char *g_J_3[6 + 1];
char *g_S_0[6 + 1];
char *g_S_1[6 + 1];
char *g_SQ_[9 + 1];
char *g_T_0[6 + 1];
char *g_T_1[6 + 1];
char *g_T_2[6 + 1];
char *g_T_3[6 + 1];
char *g_Z_0[6 + 1];
char *g_Z_1[6 + 1];
int	 g_piece_count;

int		main(int argc, char **argv)
{
	t_flagged_string	output;
	t_piece				**tet_list;
	size_t				n;

	if (argc != 2)
	{
		errors(2);
		return (0); 
	}
	pieces_init();
	start_read(argv);
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
