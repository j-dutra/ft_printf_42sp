/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:17:02 by joluiz-d          #+#    #+#             */
/*   Updated: 2022/02/20 19:12:24 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_itoa(int n);
char	*ft_itoh(size_t nbr);
int		ft_parser(char type, va_list ap);
int		ft_printf(const char *format, ...);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
int		ft_toupper(int c);
int		ft_type_c(int c);
int		ft_type_d(int d);
int		ft_type_p(size_t p);
int		ft_type_s(char *s);
int		ft_type_u(unsigned int u);
int		ft_type_x_lower(unsigned int x);
int		ft_type_x_upper(unsigned int x);
char	*ft_utoa(unsigned int n);
#endif
