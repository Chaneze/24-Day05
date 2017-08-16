/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:18:28 by caroua            #+#    #+#             */
/*   Updated: 2017/08/14 15:31:46 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if (str[i - 1] <= '/' && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if ((str[i - 1] <= 'z' && str[i - 1] >= 'A')\
				&& (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if ((str[i - 1] <= '9' && str[i - 1] >= '0')\
				&& (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
