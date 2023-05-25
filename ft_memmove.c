/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dley <dley@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:24:09 by dley              #+#    #+#             */
/*   Updated: 2023/05/25 13:07:24 by dley             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t len)
{
	size_t			i;

	i = 0;
	if (dest == NULL && source == NULL)
		return (NULL);
	if (source < dest)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)source)[i];
		}
	}
	else
	{	
		ft_memcpy(dest, source, len);
	}
	return (dest);
}
