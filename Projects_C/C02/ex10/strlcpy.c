/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:53:39 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 22:16:26 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_strlcpy
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

// Função para calcular o comprimento de uma string
int ft_strlen(char *str)
{
    int i = 0;
    
    // Itera sobre a string até encontrar o caractere nulo '\0'
    while (str[i] != '\0') {
        i++;
    }
    
    return i; // Retorna o comprimento da string
}

// Implementação da função ft_strlcpy
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int x = ft_strlen(src); // Comprimento da string de origem

    // Verifica se size é diferente de zero
    if (size != 0)
    {
        // Copia os caracteres de src para dest
        // até atingir size - 1 ou encontrar '\0' em src
        while (src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }

        dest[i] = '\0'; // Adiciona o caractere nulo de término de string em dest
    }

    return x; // Retorna o comprimento da string de origem
}
