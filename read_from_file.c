/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_from_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurawsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 14:13:38 by imurawsk          #+#    #+#             */
/*   Updated: 2016/10/26 14:13:40 by imurawsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char 	*read_from_file(int fd)
{
	int			i;
	char		*buf;
	char		*all_pieces;

	i = 0;
	buf = (char *)malloc(sizeof(char) * 1);
	all_pieces = (char *)malloc(sizeof(char) * 600);
	while (read(fd, buf, 1))
	{
		all_pieces[i] = *buf;
		i++;
	}
	all_pieces[i] = '\0';
	return (all_pieces);
}

void			start_read(char **argv)
{
	char *all_pieces;
	int fd;

	fd = open(argv[1], O_RDONLY, 600);
	all_pieces = read_from_file(fd);
	if (!all_pieces)
		return ;
	g_piece_count = get_piece_count(all_pieces);
	match_piece(all_pieces);
	close(fd);
}

