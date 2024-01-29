/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 03:14:53 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 03:18:20 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_strupcase
char *ft_strupcase(char *str);

// Definição da função ft_strupcase
char *ft_strupcase(char *str)
{       
    // Declaração de uma variável inteira para iterar sobre a string
    int i;

    // Inicializa o índice como zero
    i = 0;

    // Loop while para percorrer a string até encontrar o caractere nulo '\0'
    while (str[i] != '\0')
    {       
        // Verifica se o caractere atual é minúsculo
        if (str[i] >= 'a' && str[i] <= 'z')
            // Converte o caractere para maiúsculo subtraindo 32 da tabela ASCII
            str[i] -= 32;
        
        // Incrementa o índice para avançar para o próximo caractere da string
        i++;
    }
    
    // Retorna a string modificada
    return (str);
} 
