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

extern int      g_piece_count;
extern char		*g_I_0[4 + 1];
extern char		*g_I_1[4 + 1];
extern char		*g_L_0[6 + 1];
extern char		*g_L_1[6 + 1];
extern char		*g_L_2[6 + 1];
extern char		*g_L_3[6 + 1];
extern char		*g_L_4[6 + 1];
extern char		*g_J_0[6 + 1];
extern char		*g_J_1[6 + 1];
extern char		*g_J_2[6 + 1];
extern char		*g_J_3[6 + 1];
extern char		*g_S_0[6 + 1];
extern char		*g_S_1[6 + 1];
extern char		*g_SQ_[9 + 1];
extern char		*g_T_0[6 + 1];
extern char		*g_T_1[6 + 1];
extern char		*g_T_2[6 + 1];
extern char		*g_T_3[6 + 1];
extern char		*g_Z_0[6 + 1];
extern char		*g_Z_1[6 + 1];
extern char		**g_final_pieces;
extern int 		piece_count;

void				start_read(char **argv);
t_flagged_string	search(char *ans, t_piece **tet_list, size_t i, size_t n);
void				I_init();
void				L_init();
void				J_init();
void				S_init();
void				SQ_init();
void				T_init();
void				Z_init();
void				insert_id(int n, int i);
char				**which_global_array(int n);
int 				get_piece_count(char *pieces);
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
t_piece				*create_L0(t_piece *piece);
t_piece				*create_L1(t_piece *piece);
t_piece				*create_L2(t_piece *piece);
t_piece				*create_L3(t_piece *piece);
t_piece				*create_J0(t_piece *piece);
t_piece				*create_J1(t_piece *piece);
t_piece				*create_J2(t_piece *piece);
t_piece				*create_J3(t_piece *piece);
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
