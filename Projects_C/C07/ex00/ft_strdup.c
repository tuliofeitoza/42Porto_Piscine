/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:08:40 by aaires-d          #+#    #+#             */
/*   Updated: 2024/01/15 19:38:23 by aaires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(i + 1);
	i = 0;
	if (dest == NULL)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(int ac, char **av) 
{
	if (ac < 2)
	{
		printf("Uso: %s <string>\n", av[0]);
		return 1;
	}
	int i = 0;
	char *src;
	char *copia;
	while (i < ac)
	{
		src = av[i];
		copia = ft_strdup(src);
		i++;
	}
	if (copia != NULL)
	{
		printf("String original: %s\n", src);
		printf("Cópia da string: %s\n", copia);
	} 
	else 
	{
		printf("Erro ao alocar memória.\n");
	}
	return 0;
}*/
