/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:06:05 by joluiz-d          #+#    #+#             */
/*   Updated: 2022/02/20 17:06:14 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_type_p(size_t p)
{
	int		n;
	char	*hex;

	if (p == 0)
		return (write(1, "(nil)", 5));
	n = 0;
	hex = ft_itoh(p);
	if (hex)
	{
		n += write(1, "0x", 2);
		n += write(1, hex, ft_strlen(hex));
		free(hex);
	}
	return (n);
}
