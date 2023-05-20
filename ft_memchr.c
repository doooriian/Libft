/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dley <dley@student.42.fr >                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:23:22 by dley              #+#    #+#             */
/*   Updated: 2023/05/17 20:59:31 by dley             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	pc;

	p = (unsigned char *) s;
	pc = (unsigned char) c;
	while (n > 0)
	{
		if (*p == pc)
			return (p);
		p++;
		n--;
	}
	return (NULL);
}
