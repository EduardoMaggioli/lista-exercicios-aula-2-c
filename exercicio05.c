#include <stdio.h>

int main()
{
    int matriz[5][5];
    int maior;
    int linhaMaior, colunaMaior;
    int i, j;

    printf("Digite os valores da matriz 5x5:\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    linhaMaior = 0;
    colunaMaior = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Linha: %d\n", linhaMaior + 1);
    printf("Coluna: %d\n", colunaMaior + 1);

    return 0;
}
