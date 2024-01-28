/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:35:07 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/28 19:42:35 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_ultimate_div_mod
void ft_ultimate_div_mod(int *a, int *b);

// Definição da função ft_ultimate_div_mod
void ft_ultimate_div_mod(int *a, int *b)
{       
    // Declaração de uma variável temporária para armazenar o valor de *a
    int temp;

    // Armazena o valor de *a em temp
    temp = *a;
    
    // Realiza a divisão de *a por *b e armazena o resultado em *a
    *a = *a / *b;
    
    // Calcula o resto da divisão de temp por *b e armazena o resultado em *b
    *b = temp % *b;
}  
