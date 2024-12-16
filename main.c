// Inclui a biblioteca padrão de entrada e saída.
#include <stdio.h>
// Inclui a biblioteca padrão para funções utilitárias.
#include <stdlib.h>

// Usa-se "void" quando a aplicação não retorna nada.
void main()
{
    // Declara e inicializa a variável 'a' com o valor 10.
    int a = 10;
    // Declara e inicializa a variável 'b' com o valor 20.

    int b = 20;
    // Exibe o valor da variável 'a'.
    printf("O valor da variável a e: %d", a);
    // Exibe o valor da variável 'b'.
    printf("\nO valor da variável b e: %d", b);

    // Troca os valores das variáveis 'a' e 'b' usando uma variável temporária 'c'.
    // Armazena o valor de 'a' em 'c'.
    int c = a;
    // Atribui o valor de 'b' a 'a'.
    a = b;
    // Atribui o valor armazenado em 'c' (originalmente 'a') a 'b'.
    b = c;

    // Exibe o novo valor da variável 'a' após a troca.
    printf("\nO valor da variável a e: %d", a);
    // Exibe o novo valor da variável 'b' após a troca.
    printf("\nO valor da variável b e: %d", b);
    // Retorna "0" para indicar que o programa terminou com sucesso.
    return 0;
}
