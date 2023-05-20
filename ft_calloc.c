/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dley <dley@student.42.fr >                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:00:39 by dley              #+#    #+#             */
/*   Updated: 2023/05/11 16:33:00 by dley             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (size == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, nmemb);
	return (str);
}
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}
