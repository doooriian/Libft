/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:04:22 by doley             #+#    #+#             */
/*   Updated: 2024/10/09 01:13:13 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	unsigned char	*str;

	ch = (unsigned char)c;
	str = (unsigned char *)s;
	while (*str)
		str++;
	if (ch == '\0')
		return (str);
	while (str > (unsigned char *)s)
	{
		if (*str == ch)
			return (str);
		str--;
	}
	return (NULL);
}
