/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:45:45 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 14:52:37 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_sort_int_tab
void ft_sort_int_tab(int *tab, int size);

// Definição da função ft_sort_int_tab
void ft_sort_int_tab(int *tab, int size)
{       
    int i;   // Variável de iteração
    int temp; // Variável temporária para troca de elementos

    i = 0;

    // Loop para percorrer o array e ordená-lo
    while (i < size - 1)
    {
        // Verifica se o elemento atual é maior que o próximo elemento
        if (tab[i] > tab[i + 1])
        {       
            // Troca os elementos de posição
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;

            // Reseta o índice para percorrer o array novamente
            i = 0;
        }

        // Incrementa o índice para avançar para o próximo elemento
        i++;
    }
}
