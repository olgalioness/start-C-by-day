/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 20:47:35 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/21 21:10:13 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	int max;

	max = *tab;
	while (*tab)
	{
		if (*tab > max)
			max = *tab;
		tab++;
	}
	return (max);
}
