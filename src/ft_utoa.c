/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:03:07 by joluiz-d          #+#    #+#             */
/*   Updated: 2022/02/20 19:26:15 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	ft_nbrlen(ssize_t nbr, int base)
{
	size_t	len;

	len = 0;
	while (nbr != 0)
	{
		nbr /= base;
		++len;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	char	*str;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	len = (int) ft_nbrlen(n, 10);
	str = (char *) malloc((len + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
