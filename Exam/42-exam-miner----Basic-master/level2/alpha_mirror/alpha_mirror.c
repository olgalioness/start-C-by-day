/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 00:22:46 by maparmar          #+#    #+#             */
/*   Updated: 2019/02/18 00:35:26 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int main (int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
		{
			if (*av[1] >= 'a' && *av[1] <= 'z')
				*av[1] = 'a' + 'z' - *av[1];
			else if (*av[1] >= 'A' && *av[1] <= 'Z')
				*av[1] = 'A' + 'Z' - *av[1];
			write (1, av[1]++, 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}