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
# include <string.h>
# include <fcntl.h>
# include "libft.h"

# define DOT(a,b,c,d) (a == '.' && b == '.' && c == '.' && d == '.')

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

extern int		g_piece_count;
extern char		*g_i_0[4 + 1];
extern char		*g_i_1[4 + 1];
extern char		*g_l_0[6 + 1];
extern char		*g_l_1[6 + 1];
extern char		*g_l_2[6 + 1];
extern char		*g_l_3[6 + 1];
extern char		*g_j_0[6 + 1];
extern char		*g_j_1[6 + 1];
extern char		*g_j_2[6 + 1];
extern char		*g_j_3[6 + 1];
extern char		*g_s_0[6 + 1];
extern char		*g_s_1[6 + 1];
extern char		*g_sq_[9 + 1];
extern char		*g_t_0[6 + 1];
extern char		*g_t_1[6 + 1];
extern char		*g_t_2[6 + 1];
extern char		*g_t_3[6 + 1];
extern char		*g_z_0[6 + 1];
extern char		*g_z_1[6 + 1];
extern char		**g_final_pieces;

void				start_read(char **argv);
t_flagged_string	search(char *ans, t_piece **tet_list, size_t i, size_t n);
void				i_init();
void				l_init();
void				l_init2();
void				j_init();
void				j_init2();
void				s_init();
void				sq_init();
void				t_init();
void				t_init2();
void				z_init();
void				insert_id(int n, int i);
char				**which_global_array(int n);
int					get_piece_count(char *pieces);
void				match_piece(char *piece);
char				**make_files_array();
void				errors(int n);
void				pieces_init();
char				*write_to_string(char *s, t_piece *p, char c, size_t n);
int					check_legality(char *str, t_piece *piece, size_t n);
int					error_check(char *pieces, int count);
t_piece				**copy_piece_list(char **list, t_piece **tet_list);
t_piece				*create_piece(char *str);
t_piece				*create_piece_part_2(char *str, t_piece *piece);
t_piece				*inc_right(t_piece *piece, size_t n);
t_piece				*create_l0(t_piece *piece);
t_piece				*create_l1(t_piece *piece);
t_piece				*create_l2(t_piece *piece);
t_piece				*create_l3(t_piece *piece);
t_piece				*create_j0(t_piece *piece);
t_piece				*create_j1(t_piece *piece);
t_piece				*create_j2(t_piece *piece);
t_piece				*create_j3(t_piece *piece);
t_piece				*create_t0(t_piece *piece);
t_piece				*create_t1(t_piece *piece);
t_piece				*create_t2(t_piece *piece);
t_piece				*create_t3(t_piece *piece);
t_piece				*create_s0(t_piece *piece);
t_piece				*create_s1(t_piece *piece);
t_piece				*create_z0(t_piece *piece);
t_piece				*create_z1(t_piece *piece);
t_piece				*create_i0(t_piece *piece);
t_piece				*create_i1(t_piece *piece);
t_piece				*create_sq(t_piece *piece);
int					ft_sqrt(size_t n);
char				*new_box(size_t n);
int					box1_loc(t_piece *piece);
int					box2_loc(t_piece *piece, size_t n);
int					box3_loc(t_piece *piece, size_t n);
int					box4_loc(t_piece *piece, size_t n);
void				putbox(char *str, size_t n);

#endif
