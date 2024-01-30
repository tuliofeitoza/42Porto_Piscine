/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 00:34:52 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/30 00:44:42 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_strlen
int ft_strlen(char *str);

// Implementação da função ft_strlen
int ft_strlen(char *str)
{
    int i = 0; // Inicializa um contador para percorrer a string

    // Percorre a string até encontrar o caractere nulo de terminação '\0'
    while (str[i] != '\0')
    {
        i++; // Incrementa o contador para passar para o próximo caractere
    }

    return i; // Retorna o valor do contador, que representa o comprimento da string
}
