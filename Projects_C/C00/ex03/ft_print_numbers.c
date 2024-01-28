/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 03:33:05 by tsilva-f          #+#    #+#             */
/*   Updated: 2024/01/28 03:36:18 by tsilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Protótipo da função que será definida posteriormente
void ft_print_numbers(void);

// Definição da função ft_print_numbers
void ft_print_numbers(void)
{       
        char zero = '0'; // Declaração e inicialização da variável 'zero' com o valor '0', que será o ponto de partida para imprimir os números

        // Loop para percorrer os números de 0 a 9
        while (zero <= '9')
        {
                // Escreve o caractere atual na saída padrão (normalmente o terminal)
                write(1, &zero, 1);
                zero++; // Incrementa 'zero' para avançar para o próximo número
        }
}       

// Função principal do programa
int main()
{       
        ft_print_numbers(); // Chama a função para imprimir os números
        return (0); // Retorna 0 para indicar que o programa terminou com sucesso
}    
