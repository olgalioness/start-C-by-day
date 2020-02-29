/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 19:00:23 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/18 22:22:20 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_put.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 == *s2)
	{
		if (*s2 == '\0' || n == 0)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
