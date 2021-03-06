/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pieces2_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 15:13:41 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/27 15:13:45 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	t_init(void)
{
	g_t_0[0] = "###.\n.#..\n....\n....\n";
	g_t_0[1] = ".###\n..#.\n....\n....\n";
	g_t_0[2] = "....\n###.\n.#..\n....\n";
	g_t_0[3] = "....\n.###\n..#.\n....\n";
	g_t_0[4] = "....\n....\n###.\n.#..\n";
	g_t_0[5] = "....\n....\n.###\n..#.\n";
	g_t_0[6] = NULL;
	g_t_1[0] = ".#..\n##..\n.#..\n....\n";
	g_t_1[1] = "..#.\n.##.\n..#.\n....\n";
	g_t_1[2] = "...#\n..##\n...#\n....\n";
	g_t_1[3] = "....\n.#..\n##..\n.#..\n";
	g_t_1[4] = "....\n..#.\n.##.\n..#.\n";
	g_t_1[5] = "....\n...#\n..##\n...#\n";
	g_t_1[6] = NULL;
}

void	t_init2(void)
{
	g_t_2[0] = ".#..\n###.\n....\n....\n";
	g_t_2[1] = "..#.\n.###\n....\n....\n";
	g_t_2[2] = "....\n.#..\n###.\n....\n";
	g_t_2[3] = "....\n..#.\n.###\n....\n";
	g_t_2[4] = "....\n....\n.#..\n###.\n";
	g_t_2[5] = "....\n....\n..#.\n.###\n";
	g_t_2[6] = NULL;
	g_t_3[0] = "#...\n##..\n#...\n....\n";
	g_t_3[1] = ".#..\n.##.\n.#..\n....\n";
	g_t_3[2] = "..#.\n..##\n..#.\n....\n";
	g_t_3[3] = "....\n#...\n##..\n#...\n";
	g_t_3[4] = "....\n.#..\n.##.\n.#..\n";
	g_t_3[5] = "....\n..#.\n..##\n..#.\n";
	g_t_3[6] = NULL;
}

void	z_init(void)
{
	g_z_0[0] = "##..\n.##.\n....\n....\n";
	g_z_0[1] = ".##.\n..##\n....\n....\n";
	g_z_0[2] = "....\n##..\n.##.\n....\n";
	g_z_0[3] = "....\n.##.\n..##\n....\n";
	g_z_0[4] = "....\n....\n##..\n.##.\n";
	g_z_0[5] = "....\n....\n.##.\n..##\n";
	g_z_0[6] = NULL;
	g_z_1[0] = ".#..\n##..\n#...\n....\n";
	g_z_1[1] = "..#.\n.##.\n.#..\n....\n";
	g_z_1[2] = "...#\n..##\n..#.\n....\n";
	g_z_1[3] = "....\n.#..\n##..\n#...\n";
	g_z_1[4] = "....\n..#.\n.##.\n.#..\n";
	g_z_1[5] = "....\n...#\n..##\n..#.\n";
	g_z_1[6] = NULL;
}

char	**which_global_array(int n)
{
	char **global_arrays[19];

	global_arrays[0] = g_i_0;
	global_arrays[1] = g_i_1;
	global_arrays[2] = g_l_0;
	global_arrays[3] = g_l_1;
	global_arrays[4] = g_l_2;
	global_arrays[5] = g_l_3;
	global_arrays[6] = g_j_0;
	global_arrays[7] = g_j_1;
	global_arrays[8] = g_j_2;
	global_arrays[9] = g_j_3;
	global_arrays[10] = g_s_0;
	global_arrays[11] = g_s_1;
	global_arrays[12] = g_sq_;
	global_arrays[13] = g_t_0;
	global_arrays[14] = g_t_1;
	global_arrays[15] = g_t_2;
	global_arrays[16] = g_t_3;
	global_arrays[17] = g_z_0;
	global_arrays[18] = g_z_1;
	return (global_arrays[n]);
}
