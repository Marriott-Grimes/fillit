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

typedef				int (*t_linear_fun)(int n);

typedef struct		s_piece
{
	size_t			offset;
	t_linear_fun	box1;
	t_linear_fun	box2;
	t_linear_fun	box3;
	t_linear_fun	box4;
	size_t			height;
	size_t			width;
	size_t			n;
}					t_piece;

char				*search(char *ans, t_piece **tet_list, size_t i, size_t n);
char				*write_to_string(char *ans, t_piece *piece, char c);
int					check_legality(char *str, t_piece *piece);
t_piece				**ft_array_new(int n);
t_piece				*create_piece(char *str, int n);
t_piece				*create_piece_part_2(char *str, int n, t_piece *piece);
t_piece				*inc_right(t_piece *piece, size_t n);
t_piece				*create_L0(int n, t_piece *piece);
t_piece				*create_L1(int n, t_piece *piece);
t_piece				*create_L2(int n, t_piece *piece);
t_piece				*create_L3(int n, t_piece *piece);
t_piece				*create_rL0(int n, t_piece *piece);
t_piece				*create_rL1(int n, t_piece *piece);
t_piece				*create_rL2(int n, t_piece *piece);
t_piece				*create_rL3(int n, t_piece *piece);
t_piece				*create_T0(int n, t_piece *piece);
t_piece				*create_T1(int n, t_piece *piece);
t_piece				*create_T2(int n, t_piece *piece);
t_piece				*create_T3(int n, t_piece *piece);
t_piece				*create_S0(int n, t_piece *piece);
t_piece				*create_S1(int n, t_piece *piece);
t_piece				*create_Z0(int n, t_piece *piece);
t_piece				*create_Z1(int n, t_piece *piece);
t_piece				*create_I0(int n, t_piece *piece);
t_piece				*create_I1(int n, t_piece *piece);
t_piece				*create_SQ(int n, t_piece *piece);
int					ft_sqrt(int n);
t_piece				**copy_piece_list(char **list, t_piece **tet_list, size_t n);
void				putbox(char *str, int n);
char				*new_box(int n);
t_piece				**update_box_size(t_piece **tet_list, size_t n);
int					zero(int n);
int					one(int n);
int					two(int n);
int					three(int n);
int					npzero(int n);
int					npone(int n);
int					nptwo(int n);
int					twon(int n);
int					twonpone(int n);
int					threen(int n);

#endif
