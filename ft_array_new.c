/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 16:12:37 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/05 16:12:39 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	reset_everything(t_piece **array)
{
	int i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

t_piece	**ft_array_new(int n)
{
	t_piece **ans;
	int i;

	i = 0;
	ans = (t_piece **)malloc(sizeof(t_piece *) * n);
	if (!ans)
		return (NULL);
	while (i < n)
	{
		ans[i] = (t_piece *)malloc(sizeof(t_piece));
		if (!ans[i])
		{
			reset_everything(ans);
			return (NULL);
		}
		i++;
	}
	ans[n] = NULL;
	return (ans);
}
