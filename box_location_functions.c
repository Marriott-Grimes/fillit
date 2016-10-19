/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box_location_functions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 17:36:48 by mgrimes           #+#    #+#             */
/*   Updated: 2016/10/18 17:36:51 by mgrimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int zero(int n)
{
	(void)n;
	return (0);
}

int one(int n)
{
	(void)n;
	return (1);
}

int two(int n)
{
	(void)n;
	return (2);
}

int n(int n)
{
	return (n);
}

int npone(int n)
{
	return (n + 1);
}

int nptwo(int n)
{
	return (n + 2);
}

int twon(int n)
{
	return (2 * n);
}

int twonpone(int n)
{
	return (2 * n + 1);
}

int threen(int n)
{
	return (2 * n);
}
