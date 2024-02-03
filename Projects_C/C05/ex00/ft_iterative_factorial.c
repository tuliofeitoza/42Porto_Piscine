/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 02:09:27 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/31 02:10:52 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Função para calcular o fatorial iterativo de um número inteiro não negativo
int ft_iterative_factorial(int nb)
{
    int fact = 1; // Variável para armazenar o fatorial, inicializada com 1

    // Verificar se o número é negativo
    if (nb < 0)
        return (0); // Retorna 0 se o número for negativo, pois o fatorial não está definido para números negativos

    // Verificar se o número é 0 ou 1, pois nesses casos o fatorial é sempre 1
    if (nb <= 1)
        return (fact); // Retorna 1 para os casos de 0! e 1!

    // Calcular o fatorial de nb iterativamente
    while (nb > 1)
    {
        fact *= nb; // Multiplica fact pelo valor atual de nb
        nb--; // Decrementa nb para o próximo número a ser multiplicado
    }

    return (fact); // Retorna o fatorial calculado
}

/*#include <stdio.h>

int main(void)
{
    printf("%i", ft_iterative_factorial(10)); // Exemplo de uso da função para calcular o fatorial de 10 e imprimir o resultado
}*/
