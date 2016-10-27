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

void			pieces_init(void)
{
	i_init();
	l_init();
	l_init2();
	j_init();
	j_init2();
	s_init();
	sq_init();
	t_init();
	t_init2();
	z_init();
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

int				get_piece_count(char *pieces)
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
	if (!error_check(pieces, count))
	{
		errors(1);
		exit(EXIT_FAILURE);
	}
	return (count / 4);
}

void			errors(int n)
{
	if (n == 1)
		ft_putstr("error\n");
	if (n == 2)
		ft_putstr("usage: ./fillit source_file\n");
}
