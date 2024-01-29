/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:43:06 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 02:45:54 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_str_is_uppercase
int ft_str_is_uppercase(char *str);

// Definição da função ft_str_is_uppercase
int ft_str_is_uppercase(char *str)
{       
    // Declaração de uma variável inteira para iterar sobre a string
    int i;

    // Inicializa o índice como zero
    i = 0;

    // Loop while para percorrer a string até encontrar o caractere nulo '\0'
    while (str[i] != '\0')
    {
        // Verifica se o caractere atual não é uma letra maiúscula
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return (0); // Retorna 0 se o caractere não for uma letra maiúscula
        
        // Incrementa o índice para avançar para o próximo caractere da string
        i++;
    }
    // Retorna 1 se todos os caracteres forem letras maiúsculas
    return (1);
}
