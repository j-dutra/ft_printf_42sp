/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:06:58 by joluiz-d          #+#    #+#             */
/*   Updated: 2022/02/20 17:14:51 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_type_d(int d)
{
	char	*s;
	int		n;

	n = 0;
	s = ft_itoa(d);
	n += write(1, s, ft_strlen(s));
	free(s);
	return (n);
}
