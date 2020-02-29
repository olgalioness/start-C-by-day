/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggerardy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 01:17:11 by ggerardy          #+#    #+#             */
/*   Updated: 2018/10/30 06:44:30 by ggerardy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			sum += (*f)(tab[i]);
		i++;
	}
	return (sum);
}
