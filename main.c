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
	char	*output;
	t_piece	**tet_list;
	size_t	n;

	output = NULL;
	if (argc == 1)
		return (0);
	n = 2 * ft_sqrt(argc - 1) - 1;
	tet_list = (t_piece **)malloc(sizeof(t_piece *) * argc);
	tet_list = copy_piece_list(&argv[1], tet_list, n);
	while (1)
	{
		tet_list = update_box_size(tet_list, n);
		output = new_box(n);
		output = search(output, tet_list, 0, n);
		if (output == NULL)
		{
			ft_putstr("*********\n");
			free(output);
			ft_putstr("WHy no see this?\n");
			n++;
		}
		else 
		{
			putbox(output, n);
			return (0);
		}
	}
	return (0);
}
