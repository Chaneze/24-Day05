/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 11:17:36 by caroua            #+#    #+#             */
/*   Updated: 2017/08/14 12:54:40 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				d;
	unsigned int	i;

	d = n;
	i = 0;
	if (d < 0)
		return (ft_strcmp(s1, s2));
	if (n == 0)
		return (0);
	else if (s1[i] != '\0' && s2[i] != '\0')
	{
		while (s1[i] && (s1[i] == s2[i]) && i < n)
		{
			i++;
		}
		if (i == n)
			return (s2[i - 1] - s2[i - 1]);
		return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
