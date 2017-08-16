/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 12:54:26 by caroua            #+#    #+#             */
/*   Updated: 2017/08/08 13:11:30 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_blank(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= ' ')
		{
			i++;
		}
		else
		{
			return (i);
		}
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int rslt;
	int i;
	int sign;

	rslt = 0;
	sign = 1;
	i = ft_blank(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		rslt = rslt * 10 + str[i] - '0';
		i++;
	}
	return (sign * rslt);
}
