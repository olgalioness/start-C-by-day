/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:16:37 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/10 17:23:36 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return (*str);
}
