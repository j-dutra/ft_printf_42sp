/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 19:42:21 by joluiz-d          #+#    #+#             */
/*   Updated: 2022/02/20 19:20:25 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	ft_get_nbr_len(size_t nbr)
{
	size_t	len;

	len = 0;
	if (nbr == 0)
		len = 1;
	else
	{
		while (nbr != 0)
		{
			nbr /= 16;
			len++;
		}
	}
	return (len);
}

char	*ft_itoh(size_t nbr)
{
	char	*hex;
	char	*base;
	size_t	len;

	base = "0123456789abcdef";
	len = ft_get_nbr_len(nbr);
	hex = malloc((len + 1) * sizeof(char));
	if (hex == NULL)
		return (NULL);
	hex[len] = '\0';
	while (len-- != 0)
	{
		hex[len] = base[nbr % 16];
		nbr /= 16;
	}
	return (hex);
}
