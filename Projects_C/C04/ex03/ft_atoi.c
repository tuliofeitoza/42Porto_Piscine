/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 03:24:50 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/31 03:30:47 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	while (str[i] == 32 && (str[i] >= '9' || str[i] <= '13'))
	{
		i++;
	}
	while (str[i] == '-' || tr[i] == '+')
	{
		if (str[i] == '\0')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}
