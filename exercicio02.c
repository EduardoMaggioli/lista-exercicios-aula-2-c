#include <stdio.h>

int main()
{
    int numeros[20];
    int i;
    int maior, menor;
    int pares = 0;
    int impares = 0;
    int soma = 0;
    float media;

    printf("Digite 20 numeros inteiros:\n");

    for (i = 0; i < 20; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        soma = soma + numeros[i];

        if (numeros[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    maior = numeros[0];
    menor = numeros[0];

    for (i = 1; i < 20; i++)
    {
        if (numeros[i] > maior)
            maior = numeros[i];

        if (numeros[i] < menor)
            menor = numeros[i];
    }

    media = (float)soma / 20;

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media: %.2f\n", media);
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}
