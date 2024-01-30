/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 00:04:03 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/30 00:04:06 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_strncat
char *ft_strncat(char *dest, char *src, unsigned int nb);

// Implementação da função ft_strncat
char *ft_strncat(char *dest, char *src, unsigned int nb)
{       
    int id = 0; // Índice para percorrer dest
    int ic = 0; // Índice para percorrer src

    // Encontra o final de dest
    while (dest[id] != '\0')
    {
        id++;
    }

    // Concatena até nb caracteres de src em dest ou até o final de src ser alcançado
    while (ic < nb && src[ic] != '\0')
    {
        dest[id] = src[ic]; // Copia o caractere de src para dest
        ic++; // Incrementa o índice de src
        id++; // Incrementa o índice de dest
    }

    dest[id] = '\0'; // Adiciona o caractere nulo de término de string em dest

    return dest; // Retorna dest após a concatenação
}       

#include <stdio.h>

int main(void)
{
    char dest[50] = "I love: ";
    char src[] = "chopin and mahler s2";
    unsigned int n = 19; // Número máximo de caracteres a serem concatenados

    // Teste para verificar a função ft_strncat
    printf("%s", ft_strncat(dest, src, n));
    return 0;
}
