/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 10:36:43 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/07 19:01:35 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char *argv[])
{
	char	*name;
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i] != 0 && i < argc)
		{
			name = argv[i];
			while (*name != '\0')
			{
				ft_putchar(*name);
				name++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
