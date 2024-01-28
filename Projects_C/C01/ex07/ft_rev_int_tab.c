/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:27:10 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/28 20:46:42 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função ft_rev_int_tab
void ft_rev_int_tab(int *tab, int size);

// Definição da função ft_rev_int_tab
void ft_rev_int_tab(int *tab, int size)
{
    // Declaração de variáveis
    int f; // Índice do primeiro elemento do array
    int r; // Índice do último elemento do array
    int temp; // Variável temporária para troca de valores

    // Inicialização dos índices do primeiro e último elementos
    f = 0;
    r = size - 1;

    // Loop para inverter o array até que os índices se cruzem
    while (f < r)
    {
        // Troca os elementos nos índices f e r
        temp = tab[f];
        tab[f] = tab[r];
        tab[r] = temp;

        // Incrementa o índice do primeiro elemento e decrementa o índice do último elemento
        f++;
        r--;
    }
}
