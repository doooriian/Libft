/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dley <dley@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:33:59 by dley              #+#    #+#             */
/*   Updated: 2023/05/25 13:07:59 by dley             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*cpy;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) < len + start)
		cpy = (char *)ft_calloc(ft_strlen(s) - start + 1, sizeof(char));
	else
		cpy = (char *)ft_calloc(len + 1, sizeof(char));
	if (cpy == NULL)
		return (NULL);
	while (s[start + i] && i < len)
	{
		cpy[i] = s[start + i];
		i++;
	}
	return (cpy);
}
