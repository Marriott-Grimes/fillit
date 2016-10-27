/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 15:30:45 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/26 15:30:55 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			pieces_init()
{
	I_init();
	L_init();
	J_init();
	S_init();
	SQ_init();
	T_init();
	Z_init();
}

void			insert_id(int n, int i)
{
	char *global_arrays_names[19];

	global_arrays_names[0] = "I0";
	global_arrays_names[1] = "I1";
	global_arrays_names[2] = "L0";
	global_arrays_names[3] = "L1";
	global_arrays_names[4] = "L2";
	global_arrays_names[5] = "L3";
	global_arrays_names[6] = "J0";
	global_arrays_names[7] = "J1";
	global_arrays_names[8] = "J2";
	global_arrays_names[9] = "J3";
	global_arrays_names[10] = "S0";
	global_arrays_names[11] = "S1";
	global_arrays_names[12] = "SQ";
	global_arrays_names[13] = "T0";
	global_arrays_names[14] = "T1";
	global_arrays_names[15] = "T2";
	global_arrays_names[16] = "T3";
	global_arrays_names[17] = "Z0";
	global_arrays_names[18] = "Z1";
	g_final_pieces[i] = global_arrays_names[n];
}

int		get_piece_count(char *pieces)
{
	int len;
	int i;
	int count;

	len = ft_strlen(pieces);
	i = 0;
	count = 0;
	while (pieces[i])
	{
		if (pieces[i] == '#')
			count++;
		i++;
	}
	if (count % 4 == 0 && count > 0)
		count /= 4;
	else
	{
		errors(1);
		exit(EXIT_FAILURE);
	}
	return (count);
}

// int      get_piece_count(char *pieces)
// {
// 	int i;
// 	int len;
//     int piece_count;
//     int nl_count;

//     nl_count = 0;
//     len = ft_strlen(pieces);
// 	piece_count = 0;
// 	i = 0;
// 	while (pieces[i] != '\0')
// 	{
// 		if (pieces[i] == '\n')
// 		{
// 			nl_count++;
//             if (i != len)
//                 if (pieces[i + 1] == '\n')
// 			        piece_count++;
// 		}
// 		i++;
// 	}
// 	if (nl_count == 4 && piece_count == 0)
// 		piece_count = 1;
//    	return (piece_count + 1);
// }

void			errors(int n)
{
	if (n == 1)
		ft_putstr("error\n");
	if (n == 2)
		ft_putstr("usage: ./fillit source_file\n");
}


