/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dley <dley@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:01:02 by dley              #+#    #+#             */
/*   Updated: 2023/05/25 13:07:55 by dley             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (i > 0)
	{
		i--;
		if (str[i] == (unsigned char) c)
			return ((char *)(str + i));
	}
	if ((unsigned char) c == '\0')
		return ((char *) str + ft_strlen(str));
	return (NULL);
}
