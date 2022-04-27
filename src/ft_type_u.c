/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:20:44 by joluiz-d          #+#    #+#             */
/*   Updated: 2022/02/20 17:21:12 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_type_u(unsigned int u)
{
	char	*s;
	int		n;

	n = 0;
	s = ft_utoa(u);
	n += write(1, s, ft_strlen(s));
	free(s);
	return (n);
}
