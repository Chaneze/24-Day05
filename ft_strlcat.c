/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:11:56 by caroua            #+#    #+#             */
/*   Updated: 2017/08/15 20:05:08 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int length_d;
	unsigned int length_s;
	unsigned int i;

	length_d = 0;
	while (dest[length_d] != '\0')
		length_d++;
	length_s = 0;
	while (src[length_s] != '\0')
		length_s++;
	if (size <= length_d)
		return (length_s + size);
	else
	{
		i = 0;
		while (length_d + i < size - 1)
		{
			dest[length_d + i] = src[i];
			i++;
		}
		dest[length_d + i] = '\0';
		return (length_d + length_s);
	}
}
