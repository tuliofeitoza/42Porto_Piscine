/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:48:21 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 03:13:27 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_str_is_printable
int ft_str_is_printable(char *str);

// Definição da função ft_str_is_printable
int ft_str_is_printable(char *str)
{       
    // Declaração de uma variável inteira para iterar sobre a string
    int i;

    // Inicializa o índice como zero
    i = 0;

    // Loop while para percorrer a string até encontrar o caractere nulo '\0'
    while (str[i] != '\0')
    {
        // Verifica se o caractere atual não é um caractere imprimível
        if (str[i] < 32 || str[i] > 126)
            return (0); // Retorna 0 se o caractere não for imprimível
        
        // Incrementa o índice para avançar para o próximo caractere da string
        i++;
    }
    // Retorna 1 se todos os caracteres forem imprimíveis
    return (1);
}
