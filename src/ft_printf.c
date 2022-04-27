/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:15:05 by joluiz-d          #+#    #+#             */
/*   Updated: 2022/02/20 16:08:49 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_vprintf(const char *format, va_list ap)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			n += ft_parser(format[i], ap);
		}
		else
			n += write(1, &format[i], 1);
		i++;
	}
	return (n);
}

int	ft_printf(const char *format, ...)
{
	int		n;
	va_list	ap;

	n = 0;
	va_start(ap, format);
	n = ft_vprintf(format, ap);
	va_end(ap);
	return (n);
}
