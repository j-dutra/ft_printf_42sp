/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 19:15:43 by joluiz-d          #+#    #+#             */
/*   Updated: 2022/02/20 20:17:34 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_parser(char type, va_list ap)
{
	if (type == '%')
		return (write (1, "%", 1));
	else if (type == 'c')
		return (ft_type_c(va_arg(ap, int)));
	else if (type == 's')
		return (ft_type_s(va_arg(ap, char *)));
	else if (type == 'p')
		return (ft_type_p(va_arg(ap, size_t)));
	else if (type == 'd' || type == 'i')
		return (ft_type_d(va_arg(ap, int)));
	else if (type == 'u')
		return (ft_type_u(va_arg(ap, unsigned int)));
	else if (type == 'x')
		return (ft_type_x_lower(va_arg(ap, unsigned int)));
	else if (type == 'X')
		return (ft_type_x_upper(va_arg(ap, unsigned int)));
	else
		return (0);
}
