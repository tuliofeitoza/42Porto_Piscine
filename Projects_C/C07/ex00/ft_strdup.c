/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:08:40 by aaires-d          #+#    #+#             */
/*   Updated: 2024/01/15 19:38:23 by aaires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> // Adicionando cabeçalho para usar printf

// Função para duplicar uma string
char *ft_strdup(char *src)
{
    char *dest; // Ponteiro para a nova string duplicada
    int i = 0; // Contador para percorrer a string src

    // Conta o comprimento da string src
    while (src[i])
        i++;

    // Aloca memória para a nova string, incluindo espaço para o caractere nulo de término
    dest = malloc(i + 1);

    // Verifica se a alocação de memória foi bem-sucedida
    if (dest == NULL)
        return NULL; // Retorna NULL se a alocação falhar

    // Copia os caracteres de src para dest
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Adiciona o caractere nulo de término à nova string

    return dest; // Retorna o ponteiro para a nova string
}

// Função principal do programa
int main(int ac, char **av) 
{
    // Verifica se foi passado pelo menos um argumento
    if (ac < 2)
    {
        printf("Uso: %s <string>\n", av[0]);
        return 1; // Retorna 1 para indicar erro de uso
    }

    int i = 1; // Começa a partir do segundo argumento (ignora o nome do programa)
    char *src; // Ponteiro para armazenar o argumento atual
    char *copia; // Ponteiro para armazenar a cópia da string

    // Loop para processar cada argumento
    while (i < ac)
    {
        src = av[i]; // Obtém o argumento atual
        copia = ft_strdup(src); // Duplica a string usando a função ft_strdup
        i++; // Move para o próximo argumento
    }

    // Verifica se a cópia foi bem-sucedida
    if (copia != NULL)
    {
        printf("String original: %s\n", src); // Imprime a string original
        printf("Cópia da string: %s\n", copia); // Imprime a cópia da string
        free(copia); // Libera a memória alocada para a cópia da string
    } 
    else 
    {
        printf("Erro ao alocar memória.\n"); // Imprime uma mensagem de erro se a alocação falhar
    }

    return 0; // Retorna 0 para indicar sucesso
}
