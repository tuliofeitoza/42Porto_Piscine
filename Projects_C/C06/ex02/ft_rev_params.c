/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:07:51 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/29 17:23:22 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Função principal do programa
int main(int ac, char **av)
{
    int iv; // Índice para percorrer os caracteres de cada argumento
    int fc; // Contador para percorrer os argumentos da linha de comando, começando pelo último

    iv = 0; // Inicializa o índice para percorrer os caracteres
    fc = ac - 1; // Inicializa o contador para percorrer os argumentos, começando pelo último

    // Loop para iterar sobre os argumentos da linha de comando
    while (fc > 0)
    {
        // Reinicializa o índice para percorrer os caracteres de cada argumento
        iv = 0;

        // Loop para iterar sobre os caracteres do argumento atual
        while (av[fc][iv] != '\0')
        {
            write(1, &av[fc][iv], 1); // Escreve o caractere atual na saída padrão
            iv++; // Incrementa o índice para passar para o próximo caractere
        }

        fc--; // Decrementa o contador para passar para o próximo argumento (começando pelo último)
        write(1, "\n", 1); // Escreve uma nova linha na saída padrão após cada argumento
    }
}
