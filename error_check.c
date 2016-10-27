/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 13:01:20 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/27 13:01:24 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		error_check(char *pieces, int count)
{
	int len;
	int i;

	len = ft_strlen(pieces);
	i = 0;

	if (count % 4 == 0 && count > 0 && len % 21 == 20
		&& len == (count / 4) * 21 - 1)
		return (1);
	return (0);
}
