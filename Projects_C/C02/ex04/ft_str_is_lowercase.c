/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:38:01 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 02:41:06 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_str_is_lowercase
int ft_str_is_lowercase(char *str);

// Definição da função ft_str_is_lowercase
int ft_str_is_lowercase(char *str)
{
    // Declaração de uma variável inteira para iterar sobre a string
    int i;

    // Inicializa o índice como zero
    i = 0;

    // Loop while para percorrer a string até encontrar o caractere nulo '\0'
    while (str[i] != '\0')
    {
        // Verifica se o caractere atual não é uma letra minúscula
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return (0); // Retorna 0 se o caractere não for uma letra minúscula

        // Incrementa o índice para avançar para o próximo caractere da string
        i++;
    }
    // Retorna 1 se todos os caracteres forem letras minúsculas
    return (1);
}
