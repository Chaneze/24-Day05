/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 13:47:31 by caroua            #+#    #+#             */
/*   Updated: 2017/08/15 21:02:57 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_b(char *base, int size_str, int size_base)
{
	int i;
	int j;

	i = 0;
	if (size_base < 2 || size_str < 1)
	{
		return (0);
	}
	while (i < size_base)
	{
		j = i + 1;
		while (j <= size_base)
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_s(char *str, char *base, int size_str, int size_base)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (i < size_str)
	{
		j = 0;
		while (j <= size_base)
		{
			if (str[i] == base[j])
				count++;
			j++;
		}
		if (str[i] == '+' || str[i] == '-')
			count++;
		i++;
	}
	if (count == size_str)
	{
		return (1);
	}
	else
		return (0);
}

int		ft_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 || nb == 1)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	else
	{
		return (nb = nb * ft_power(nb, power - 1));
	}
}

int		ft_sol_atoi_base(char *str, char *base, int size_str, int size_base)
{
	int i;
	int j;
	int rslt;

	i = 0;
	rslt = 0;
	while (str[i] != '\0' && str[i] != '+' && str[i] != '-')
	{
		j = 0;
		while (str[i] != base[j])
		{
			j++;
		}
		rslt = rslt + j * ft_power(size_base, size_str - 1 - i);
		i++;
	}
	return (rslt);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int j;
	int k;
	int sign;

	i = 0;
	j = 0;
	k = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	j = i;
	while (str[j] != '\0' && str[j] != '+' && str[j] != '-')
		j++;
	while (base[k] != '\0')
		k++;
	if ((ft_b(base, j - i, k) == 1) && (ft_s(str + i, base, j - i, k) == 1))
	{
		return (sign * ft_sol_atoi_base(str + i, base, j - i, k));
	}
	return (0);
}
