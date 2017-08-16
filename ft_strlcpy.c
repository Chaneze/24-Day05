/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:12:01 by caroua            #+#    #+#             */
/*   Updated: 2017/08/15 21:04:17 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int length_s;
	unsigned int i;

	length_s = 0;
	while (src[length_s] != '\0')
		length_s++;
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i - 1] = '\0';
	return (length_s);
}
