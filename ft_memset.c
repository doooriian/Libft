/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dley <dley@student.42.fr >                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 00:25:46 by dley              #+#    #+#             */
/*   Updated: 2023/05/11 03:29:50 by dley             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)pointer;
	while (len > 0)
	{
		*p = value;
		len--;
		p++;
	}
	return (pointer);
}
