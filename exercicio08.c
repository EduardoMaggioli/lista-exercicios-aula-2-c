#include <stdio.h>

int maior(int a, int b)
{
    if (a > b)
        return a;

    return b;
}

int menor(int a, int b)
{
    if (a < b)
        return a;

    return b;
}

float media(float a, float b)
{
    return (a + b) / 2;
}

int fatorial(int n)
{
    int resultado = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        resultado = resultado * i;
    }

    return resultado;
}

int main()
{
    int a, b;
    int numero;
    float x, y;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Digite dois numeros para calcular a media: ");
    scanf("%f %f", &x, &y);

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero);

    printf("\nMaior: %d\n", maior(a, b));
    printf("Menor: %d\n", menor(a, b));
    printf("Media: %.2f\n", media(x, y));
    printf("Fatorial de %d: %d\n", numero, fatorial(numero));

    return 0;
}
