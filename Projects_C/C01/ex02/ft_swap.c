/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:15:12 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/28 19:18:17 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_swap
void ft_swap(int *a, int *b);

// Definição da função ft_swap
void ft_swap(int *a, int *b)
{       
    // Declaração de uma variável temporária para armazenar o valor de a
    int temp;

    // Armazena o valor apontado por a na variável temporária
    temp = *a;
    
    // Atribui o valor apontado por b à localização de memória apontada por a
    *a = *b;
    
    // Atribui o valor armazenado na variável temporária (antigo valor de a) à localização de memória apontada por b
    *b = temp;
} 
