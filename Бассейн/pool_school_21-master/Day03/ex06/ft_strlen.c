/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 21:59:24 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/18 20:56:04 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	if (str != NULL)
	{
		while (*str != '\0')
		{
			i++;
			str++;
		}
	}
	return (i);
}
