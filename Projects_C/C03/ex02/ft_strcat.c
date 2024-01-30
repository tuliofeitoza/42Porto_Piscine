/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:26:36 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 23:54:03 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_strcat
char *ft_strcat(char *dest, char *src);

// Implementação da função ft_strcat
char *ft_strcat(char *dest, char *src)
{       
    int id = 0; // Índice para percorrer dest
    int ic = 0; // Índice para percorrer src

    // Encontra o final de dest
    while (dest[id] != '\0')
    {       
        id++;
    }

    // Concatena os caracteres de src em dest
    while (src[ic] != '\0')
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
    char src[] = "Andre";
    char dest[] = "Manel ";

    // Teste para verificar a função ft_strcat
    printf("%s", ft_strcat(dest, src)); // Deve imprimir "Manel Andre"
}
