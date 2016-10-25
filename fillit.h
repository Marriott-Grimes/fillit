/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 16:13:43 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/05 16:13:44 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

#define DOT(a,b,c,d) (a == '.' && b == '.' && c == '.' && d == '.')

typedef struct		s_piece
{
	size_t			offset;
	size_t			box1x;
	size_t			box2y;
	size_t			box2x;
	size_t			box3y;
	size_t			box3x;
	size_t			box4y;
	size_t			box4x;
	size_t			height;
	size_t			width;
}					t_piece;

typedef struct		s_flagged_string
{
	char			*str;
	int				index;
}					t_flagged_string;

t_flagged_string	search(char *ans, t_piece **tet_list, size_t i, size_t n);
char				*write_to_string(char *ans, t_piece *piece, char c, size_t n);
int					check_legality(char *str, t_piece *piece, size_t n);
t_piece				**copy_piece_list(char **list, t_piece **tet_list);
t_piece				*create_piece(char *str);
t_piece				*create_piece_part_2(char *str, t_piece *piece);
t_piece				*inc_right(t_piece *piece, size_t n);
t_piece				*create_L0(t_piece *piece);
t_piece				*create_L1(t_piece *piece);
t_piece				*create_L2(t_piece *piece);
t_piece				*create_L3(t_piece *piece);
t_piece				*create_rL0(t_piece *piece);
t_piece				*create_rL1(t_piece *piece);
t_piece				*create_rL2(t_piece *piece);
t_piece				*create_rL3(t_piece *piece);
t_piece				*create_T0(t_piece *piece);
t_piece				*create_T1(t_piece *piece);
t_piece				*create_T2(t_piece *piece);
t_piece				*create_T3(t_piece *piece);
t_piece				*create_S0(t_piece *piece);
t_piece				*create_S1(t_piece *piece);
t_piece				*create_Z0(t_piece *piece);
t_piece				*create_Z1(t_piece *piece);
t_piece				*create_I0(t_piece *piece);
t_piece				*create_I1(t_piece *piece);
t_piece				*create_SQ(t_piece *piece);
int					ft_sqrt(size_t n);
char				*new_box(size_t n);
int					box1_loc(t_piece *piece);
int					box2_loc(t_piece *piece, size_t n);
int					box3_loc(t_piece *piece, size_t n);
int					box4_loc(t_piece *piece, size_t n);
void				putbox(char *str, size_t n);

#endif
