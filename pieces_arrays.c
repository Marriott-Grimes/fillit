#include "fillit.h"

void	I_init()
{
	g_I_1[0] = "####\n....\n....\n....\n";
	g_I_1[1] = "....\n####\n....\n....\n";
	g_I_1[2] = "....\n....\n####\n....\n";
	g_I_1[3] = "....\n....\n....\n####\n";
	g_I_1[4] = NULL;
	g_I_0[0] = "#...\n#...\n#...\n#...\n";
	g_I_0[1] = ".#..\n.#..\n.#..\n.#..\n";
	g_I_0[2] = "..#.\n..#.\n..#.\n..#.\n";
	g_I_0[3] = "...#\n...#\n...#\n...#\n";
	g_I_0[4] = NULL;
}

void	L_init()
{
	g_L_0[0] = "#...\n#...\n##..\n....\n";
	g_L_0[1] = ".#..\n.#..\n.##.\n....\n";
	g_L_0[2] = "..#.\n..#.\n..##\n....\n";
	g_L_0[3] = "....\n#...\n#...\n##..\n";
	g_L_0[4] = "....\n.#..\n.#..\n.##.\n";
	g_L_0[5] = "....\n..#.\n..#.\n..##\n";
	g_L_0[6] = NULL;
	g_L_1[0] = "###.\n#...\n....\n....\n";
	g_L_1[1] = "###.\n#...\n....\n....\n";
	g_L_1[2] = "....\n###.\n#...\n....\n";
	g_L_1[3] = "....\n.###\n.#..\n....\n";
	g_L_1[4] = "....\n....\n###.\n#...\n";
	g_L_1[5] = "....\n....\n.###\n.#..\n";
	g_L_1[6] = NULL;
	g_L_2[0] = "##..\n.#..\n.#..\n....\n";
	g_L_2[1] = ".##.\n..#.\n..#.\n....\n";
	g_L_2[2] = "..##\n...#\n...#\n....\n";
	g_L_2[3] = "....\n##..\n.#..\n.#..\n";
	g_L_2[4] = "....\n.##.\n..#.\n..#.\n";
	g_L_2[5] = "....\n..##\n...#\n...#\n";
	g_L_2[6] = NULL;
	g_L_3[0] = "..#.\n###.\n....\n....\n";
	g_L_3[1] = "...#\n.###\n....\n....\n";
	g_L_3[2] = "....\n..#.\n###.\n....\n";
	g_L_3[3] = "....\n...#\n.###\n....\n";
	g_L_3[4] = "....\n....\n..#.\n###.\n";
	g_L_3[5] = "....\n....\n...#\n.###\n";
	g_L_3[6] = NULL;
}

void	J_init()
{
	g_J_0[0] = ".#..\n.#..\n##..\n....\n";
	g_J_0[1] = "..#.\n..#.\n.##.\n....\n";
	g_J_0[2] = "...#\n...#\n..##\n....\n";
	g_J_0[3] = "....\n.#..\n.#..\n##..\n";
	g_J_0[4] = "....\n..#.\n..#.\n.##.\n";
	g_J_0[5] = "....\n...#\n...#\n..##\n";
	g_J_0[6] = NULL;
	g_J_1[0] = "#...\n###.\n....\n....\n";
	g_J_1[1] = ".#..\n.###\n....\n....\n";
	g_J_1[2] = "....\n#...\n###.\n....\n";
	g_J_1[3] = "....\n.#..\n.###\n....\n";
	g_J_1[4] = "....\n....\n#...\n###.\n";
	g_J_1[5] = "....\n....\n.#..\n.###\n";
	g_J_1[6] = NULL;
	g_J_2[0] = "#...\n###.\n....\n....\n";
	g_J_2[1] = ".#..\n.###\n....\n....\n";
	g_J_2[2] = "....\n#...\n###.\n....\n";
	g_J_2[3] = "....\n.#..\n.###\n....\n";
	g_J_2[4] = "....\n....\n#...\n###.\n";
	g_J_2[5] = "....\n....\n.#..\n.###\n";
	g_J_2[6] = NULL;
	g_J_3[0] = "###.\n..#.\n....\n....\n";
	g_J_3[1] = ".###\n...#\n....\n....\n";
	g_J_3[2] = "....\n###.\n..#.\n....\n";
	g_J_3[3] = "....\n.###\n...#\n....\n";
	g_J_3[4] = "....\n....\n###.\n..#.\n";
	g_J_3[5] = "....\n....\n.###\n...#\n";
	g_J_3[6] = NULL;
}

void	S_init()
{
	g_S_0[0] = ".##.\n##..\n....\n....\n";
	g_S_0[1] = "..##\n.##.\n....\n....\n";
	g_S_0[2] = "....\n.##.\n##..\n....\n";
	g_S_0[3] = "....\n..##\n.##.\n....\n";
	g_S_0[4] = "....\n....\n.##.\n##..\n";
	g_S_0[5] = "....\n....\n..##\n.##.\n";
	g_S_0[6] = NULL;
	g_S_1[0] = "#...\n##..\n.#..\n....\n";
	g_S_1[1] = ".#..\n.##.\n..#.\n....\n";
	g_S_1[2] = "..#.\n..##\n...#\n....\n";
	g_S_1[3] = "....\n#...\n##..\n.#..\n";
	g_S_1[4] = "....\n.#..\n.##.\n..#.\n";
	g_S_1[5] = "....\n..#.\n..##\n...#\n";
	g_S_1[6] = NULL;
}

void	SQ_init()
{
	g_SQ_[0] = "##..\n##..\n....\n....\n";
	g_SQ_[1] = ".##.\n.##.\n....\n....\n";
	g_SQ_[2] = "..##\n..##\n....\n....\n";
	g_SQ_[3] = "....\n##..\n##..\n....\n";
	g_SQ_[4] = "....\n.##.\n.##.\n....\n";
	g_SQ_[5] = "....\n..##\n..##\n....\n";
	g_SQ_[6] = "....\n....\n##..\n##..\n";
	g_SQ_[7] = "....\n....\n.##.\n.##.\n";
	g_SQ_[8] = "....\n....\n..##\n..##\n";
	g_SQ_[9] = NULL;
}
