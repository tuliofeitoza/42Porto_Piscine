/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:51:45 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/28 19:55:59 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_putstr
void ft_putstr(char *str);

// Definição da função ft_putstr
void ft_putstr(char *str)
{
    // Declaração de uma variável inteira para iterar sobre a string
    int i;

    // Inicializa o índice como zero
    i = 0;

    // Loop while para percorrer a string até encontrar o caractere nulo '\0'
    while(str[i] != '\0')
    {
        // Escreve o caractere atual da string no stdout (1) usando a função write
        write(1, &str[i], 1);

        // Incrementa o índice para avançar para o próximo caractere da string
        i++;
    }
}
