#include <stdio.h>

int main()
{
    int numeros[10];
    int i;

    printf("Digite 10 numeros inteiros:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros na ordem digitada:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n\nNumeros na ordem inversa:\n");

    for (i = 9; i >= 0; i--)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
