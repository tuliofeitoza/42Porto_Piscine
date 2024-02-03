/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:05:30 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/31 22:14:37 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Função para calcular a raiz quadrada inteira de um número
int ft_sqrt(int nb)
{
    int i = 0; // Variável para iterar sobre os possíveis valores da raiz quadrada

    // Verifica se o número é negativo ou zero
    if (nb <= 0)
        return (0); // Retorna 0 para números negativos ou zero

    // Caso especial: raiz quadrada de 1 é 1
    if (nb == 1)
        return (1); // Retorna 1 para o número 1

    // Loop para encontrar a raiz quadrada inteira do número
    while (i * i <= nb && i <= 46340) // Limitado a 46340 para evitar estouro de int
    {
        // Verifica se o quadrado de i é igual a nb
        if ((i * i) == nb)
            return (i); // Retorna i se o quadrado de i for igual a nb
        i++; // Incrementa i para tentar o próximo valor
    }

    return (0); // Retorna 0 se não encontrar a raiz quadrada inteira
}
