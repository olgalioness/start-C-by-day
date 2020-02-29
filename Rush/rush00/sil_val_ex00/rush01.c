/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 17:23:30 by pradoste          #+#    #+#             */
/*   Updated: 2018/03/18 20:25:52 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_line(char a, char b, char c, int x)
{
	if (x > 0)
	{
		ft_putchar(a);
	}
	while (x > 2)
	{
		ft_putchar(b);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int midlines;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	midlines = y - 2;
	ft_print_line('/', '*', '\\', x);
	while (midlines > 0)
	{
		ft_print_line('*', ' ', '*', x);
		midlines--;
	}
	if (y > 1)
	{
		ft_print_line('\\', '*', '/', x);
	}
}