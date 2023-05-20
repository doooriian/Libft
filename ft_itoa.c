/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dley <dley@student.42.fr >                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:03:11 by dley              #+#    #+#             */
/*   Updated: 2023/05/12 17:23:43 by dley             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_special_case(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

static unsigned int	ft_count(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while ((n / 10) > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			count;
	char		*str;

	if (n == 0 || n == -2147483648)
		return (ft_special_case(n));
	count = ft_count(n);
	str = malloc((count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{	
		str[0] = '-';
		n = -n;
	}
	str[count] = '\0';
	if (n < 0)
		count--;
	count -= 1;
	while (n != 0)
	{
		str[count] = (n % 10) + '0';
		n = n / 10;
		count--;
	}
	return (str);
}
