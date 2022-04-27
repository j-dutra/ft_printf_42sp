/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:06:37 by joluiz-d          #+#    #+#             */
/*   Updated: 2022/02/20 17:59:34 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*ptr;
	size_t	idx;

	idx = 0;
	size = 0;
	while (s1[size] != '\0')
		size++;
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (idx < size)
	{
		ptr[idx] = s1[idx];
		idx++;
	}
	ptr[size] = '\0';
	return (ptr);
}
