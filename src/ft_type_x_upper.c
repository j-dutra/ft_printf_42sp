/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_x_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:09:41 by joluiz-d          #+#    #+#             */
/*   Updated: 2022/02/20 19:48:37 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_type_x_upper(unsigned int x)
{
	char	*hex;
	int		n;
	int		i;

	n = 0;
	hex = ft_itoh(x);
	if (hex)
	{
		i = 0;
		while (hex[i] != '\0')
		{
			hex[i] = ft_toupper(hex[i]);
			i++;
		}
		n += write(1, hex, ft_strlen(hex));
		free(hex);
	}
	return (n);
}
