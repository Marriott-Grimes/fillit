/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_box.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/15 19:37:26 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/15 19:37:28 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*new_box(size_t n)
{
	char *ans;
	size_t i;

	i = 0;
	ans = (char *)malloc(n * n);
	while (i < n * n)
	{
		ans[i] = '.';
		i++;
	}
	ans[i] = 0;
	return (ans);
}
