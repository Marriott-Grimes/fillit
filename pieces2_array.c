#include "fillit.h"

void	T_init()
{
	g_T_0[0] = "###.\n.#..\n....\n....\n";
	g_T_0[1] = ".###\n..#.\n....\n....\n";
	g_T_0[2] = "....\n###.\n.#..\n....\n";
	g_T_0[3] = "....\n.###\n..#.\n....\n";
	g_T_0[4] = "....\n....\n###.\n.#..\n";
	g_T_0[5] = "....\n....\n.###\n..#.\n";
	g_T_0[6] = NULL;
	g_T_1[0] = ".#..\n##..\n.#..\n....\n";
	g_T_1[1] = "..#.\n.##.\n..#.\n....\n";
	g_T_1[2] = "...#\n..##\n...#\n....\n";
	g_T_1[3] = "....\n.#..\n##..\n.#..\n";
	g_T_1[4] = "....\n..#.\n.##.\n..#.\n";
	g_T_1[5] = "....\n...#\n..##\n...#\n";
	g_T_1[6] = NULL;
}

void	T_init2()
{
	g_T_2[0] = ".#..\n###.\n....\n....\n";
	g_T_2[1] = "..#.\n.###\n....\n....\n";
	g_T_2[2] = "....\n.#..\n###.\n....\n";
	g_T_2[3] = "....\n..#.\n.###\n....\n";
	g_T_2[4] = "....\n....\n.#..\n###.\n";
	g_T_2[5] = "....\n....\n..#.\n.###\n";
	g_T_2[6] = NULL;
	g_T_3[0] = "#...\n##..\n#...\n....\n";
	g_T_3[1] = ".#..\n.##.\n.#..\n....\n";
	g_T_3[2] = "..#.\n..##\n..#.\n....\n";
	g_T_3[3] = "....\n#...\n##..\n#...\n";
	g_T_3[4] = "....\n.#..\n.##.\n.#..\n";
	g_T_3[5] = "....\n..#.\n..##\n..#.\n";
	g_T_3[6] = NULL;
}

void	Z_init()
{
	g_Z_0[0] = "##..\n.##.\n....\n....\n";
	g_Z_0[1] = ".##.\n..##\n....\n....\n";
	g_Z_0[2] = "....\n##..\n.##.\n....\n";
	g_Z_0[3] = "....\n.##.\n..##\n....\n";
	g_Z_0[4] = "....\n....\n##..\n.##.\n";
	g_Z_0[5] = "....\n....\n.##.\n..##\n";
	g_Z_0[6] = NULL;
	g_Z_1[0] = ".#..\n##..\n#...\n....\n";
	g_Z_1[1] = "..#.\n.##.\n.#..\n....\n";
	g_Z_1[2] = "...#\n..##\n..#.\n....\n";
	g_Z_1[3] = "....\n.#..\n##..\n#...\n";
	g_Z_1[4] = "....\n..#.\n.##.\n.#..\n";
	g_Z_1[5] = "....\n...#\n..##\n..#.\n";
	g_Z_1[6] = NULL;
}

char	**which_global_array(int n)
{
	char **global_arrays[19];

	global_arrays[0] = g_I_0;
	global_arrays[1] = g_I_1;
	global_arrays[2] = g_L_0;
	global_arrays[3] = g_L_1;
	global_arrays[4] = g_L_2;
	global_arrays[5] = g_L_3;
	global_arrays[6] = g_J_0;
	global_arrays[7] = g_J_1;
	global_arrays[8] = g_J_2;
	global_arrays[9] = g_J_3;
	global_arrays[10] = g_S_0;
	global_arrays[11] = g_S_1;
	global_arrays[12] = g_SQ_;
	global_arrays[13] = g_T_0;
	global_arrays[14] = g_T_1;
	global_arrays[15] = g_T_2;
	global_arrays[16] = g_T_3;
	global_arrays[17] = g_Z_0;
	global_arrays[18] = g_Z_1;
	return (global_arrays[n]);
}
