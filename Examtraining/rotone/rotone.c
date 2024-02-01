/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 03:57:01 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/02/01 04:10:18 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if((s[i] >= 'A' && s[i] <= 'Y') || (s[i] >= 'a' && s[i] <= 'y'))
			ft_putchar(s[i] + 1);
		else if (s[i] == 'Z' || s[i] == 'z')
			ft_putchar(s[i] - 25);
		else
			ft_putchar(s[i]);
		i++;
	}
}

int	main(int ar, char **av)
{
	if (ar == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}
