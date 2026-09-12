#include <stdio.h>

int main()
{
    int numeros[15];
    int numero;
    int i;
    int encontrado = 0;

    printf("Digite 15 numeros inteiros:\n");

    for (i = 0; i < 15; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nDigite um numero para pesquisar: ");
    scanf("%d", &numero);

    for (i = 0; i < 15; i++)
    {
        if (numeros[i] == numero)
        {
            printf("Numero encontrado na posicao %d.\n", i + 1);
            encontrado = 1;
        }
    }

    if (encontrado == 0)
    {
        printf("Numero nao encontrado.\n");
    }

    return 0;
}
