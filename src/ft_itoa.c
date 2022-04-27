/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:20:08 by joluiz-d          #+#    #+#             */
/*   Updated: 2022/02/20 17:45:47 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	len_n(int n)
{
	int	len;

	len = 0;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*converter(int n)
{
	int		len;
	char	*n_str;
	char	signal;

	len = 0;
	signal = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
		signal = 1;
	}
	len += len_n(n);
	n_str = (char *)malloc((len + 1) * sizeof(*n_str));
	if (n_str == NULL)
		return (NULL);
	n_str[len] = '\0';
	if (signal == 1)
		n_str[0] = '-';
	while (n != 0)
	{
		n_str[--len] = n % 10 + '0';
		n /= 10;
	}
	return (n_str);
}

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	return (converter(n));
}
