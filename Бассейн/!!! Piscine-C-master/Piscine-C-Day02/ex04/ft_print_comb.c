/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 19:17:04 by rfork             #+#    #+#             */
/*   Updated: 2019/08/01 19:18:33 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	char d0;
	char d1;
	char d2;

	d0 = '0' - 1;
	while (d0++ <= '9')
	{
		d1 = d0;
		while (d1++ <= '9')
		{
			d2 = d1;
			while (d2++ < '9')
			{
				ft_putchar(d0);
				ft_putchar(d1);
				ft_putchar(d2);
				if (d0 != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
