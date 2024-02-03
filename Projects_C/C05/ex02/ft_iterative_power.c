/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 02:14:37 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/31 02:41:04 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Função para calcular a potência de um número de forma iterativa
int ft_iterative_power(int nb, int power)
{
    int result = nb; // Inicializa o resultado com nb
    int i; // Variável de iteração

    // Verifica se a potência é negativa
    if (power < 0)
        return (0); // Retorna 0 se a potência for negativa, pois não está definido para potências negativas

    // Caso especial: potência igual a 0
    if (power == 0)
        return (1); // Retorna 1 para qualquer número elevado a 0

    // Calcula a potência de nb iterativamente
    for (i = 1; i < power; i++)
    {
        result *= nb; // Multiplica o resultado pelo número nb
    }

    return (result); // Retorna o resultado final da potência
}

/*#include <stdio.h>

int main(void)
{
    printf("%i", ft_iterative_power(2, 4)); // Exemplo de uso da função para calcular 2 elevado a 4 e imprimir o resultado
}*/
