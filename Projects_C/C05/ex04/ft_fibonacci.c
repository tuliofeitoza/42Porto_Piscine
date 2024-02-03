/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:26:42 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/31 21:31:03 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Função para calcular o n-ésimo número da sequência de Fibonacci de forma recursiva
int ft_fibonacci(int index)
{
    // Verifica se o índice é negativo
    if (index < 0)
        return (-1); // Retorna -1 para índices inválidos

    // Casos base: os dois primeiros números da sequência de Fibonacci
    if (index == 0)
        return (0); // Retorna 0 para o primeiro número (índice 0)
    if (index == 1)
        return (1); // Retorna 1 para o segundo número (índice 1)

    // Caso geral: retorna a soma dos dois números anteriores na sequência de Fibonacci
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
