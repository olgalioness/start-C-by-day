
int		ft_putchar(char c);

void	ft_print_manager(int x, char startchar, char midchar, char endchar)
{
	ft_putchar(startchar);
	while ((x - 1) > 1)
	{
		ft_putchar(midchar);
		x--;
	}
	if (x > 1)
		ft_putchar(endchar);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print_manager(x, '/', '*', '\\');
		y--;
		while (y > 1)
		{
			ft_print_manager(x, '*', ' ', '*');
			y--;
		}
		if (y > 0)
			ft_print_manager(x, '\\', '*', '/');
	}
	return ;
}
