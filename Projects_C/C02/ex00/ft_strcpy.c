/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:27:42 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/28 21:31:50 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_strcpy
char *ft_strcpy(char *dest, char *src);

// Implementação da função ft_strcpy
char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    // Copia os caracteres de src para dest até encontrar '\0' em src
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    
    // Adiciona o caractere nulo de término de string em dest
    dest[i] = '\0';
    
    return dest; // Retorna dest após a cópia
}
