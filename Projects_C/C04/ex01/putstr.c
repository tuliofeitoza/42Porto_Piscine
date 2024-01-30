/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 05:03:06 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/30 05:06:56 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_putstr
void ft_putstr(char *str);

// Definição da função ft_putstr
void ft_putstr(char *str)
{       
    int i; // Variável de iteração
    
    // Inicialização do índice
    i = 0;
    
    // Loop while para percorrer a string até encontrar o caractere nulo '\0'
    while (str[i] != '\0')
    {
        // Escreve o caractere atual da string no stdout (saída padrão)
        write(1, &str[i], 1);
        
        // Incrementa o índice para avançar para o próximo caractere da string
        i++;
    }
}
