/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:53:54 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 15:01:36 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Definição da função ft_rev_int_tab
void ft_rev_int_tab(int *tab, int size)
{
    int i;     // Variável para percorrer o array
    int f;     // Variável para percorrer o array a partir do final
    int temp;  // Variável temporária para armazenar o valor durante a troca

    // Inicialização das variáveis de iteração
    i = 0;
    f = size - 1;

    // Loop para inverter o array
    while (i < f)
    {
        // Troca os elementos nas posições i e f
        temp = tab[i];
        tab[i] = tab[f];
        tab[f] = temp;

        // Atualiza os índices para continuar invertendo o array
        i++;
        f--;
    }
}
