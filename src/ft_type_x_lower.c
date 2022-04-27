/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_x_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:07:55 by joluiz-d          #+#    #+#             */
/*   Updated: 2022/02/20 20:14:39 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_type_x_lower(unsigned int x)
{
	char	*hex;
	int		n;

	n = 0;
	hex = ft_itoh(x);
	if (hex)
	{
		n += write(1, hex, ft_strlen(hex));
		free(hex);
	}
	return (n);
}
