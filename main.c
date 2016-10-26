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

int		main(int argc, char **argv)
{
	t_flagged_string	output;
	t_piece				**tet_list;
	size_t				n;

	if (argc == 1)
		return (0);
	n = 2 * ft_sqrt(argc - 1) - 1;
	output.str = new_box(n); 
	output.index = 0;
	tet_list = (t_piece **)malloc(sizeof(t_piece *) * argc);
	tet_list = copy_piece_list(&argv[1], tet_list);
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
