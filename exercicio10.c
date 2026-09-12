#include <stdio.h>

void mostrarTabuleiro(char jogo[3][3])
{
    int i, j;

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %c ", jogo[i][j]);

            if (j < 2)
                printf("|");
        }

        printf("\n");

        if (i < 2)
            printf("---+---+---\n");
    }

    printf("\n");
}

int verificarVitoria(char jogo[3][3], char jogador)
{
    int i;

    for (i = 0; i < 3; i++)
    {
        if (jogo[i][0] == jogador &&
            jogo[i][1] == jogador &&
            jogo[i][2] == jogador)
        {
            return 1;
        }

        if (jogo[0][i] == jogador &&
            jogo[1][i] == jogador &&
            jogo[2][i] == jogador)
        {
            return 1;
        }
    }

    if (jogo[0][0] == jogador &&
        jogo[1][1] == jogador &&
        jogo[2][2] == jogador)
    {
        return 1;
    }

    if (jogo[0][2] == jogador &&
        jogo[1][1] == jogador &&
        jogo[2][0] == jogador)
    {
        return 1;
    }

    return 0;
}

int verificarEmpate(char jogo[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (jogo[i][j] == ' ')
                return 0;
        }
    }

    return 1;
}

int fazerJogada(char jogo[3][3], char jogador)
{
    int linha, coluna;

    printf("Jogador %c\n", jogador);
    printf("Digite a linha (1 a 3): ");
    scanf("%d", &linha);

    printf("Digite a coluna (1 a 3): ");
    scanf("%d", &coluna);

    linha--;
    coluna--;

    if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2)
    {
        printf("Posicao invalida.\n");
        return 0;
    }

    if (jogo[linha][coluna] != ' ')
    {
        printf("Essa posicao ja esta ocupada.\n");
        return 0;
    }

    jogo[linha][coluna] = jogador;

    return 1;
}

int main()
{
    char jogo[3][3];
    char jogador = 'X';
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            jogo[i][j] = ' ';
        }
    }

    printf("JOGO DA VELHA\n");

    while (1)
    {
        mostrarTabuleiro(jogo);

        if (!fazerJogada(jogo, jogador))
            continue;

        if (verificarVitoria(jogo, jogador))
        {
            mostrarTabuleiro(jogo);
            printf("Jogador %c venceu!\n", jogador);
            break;
        }

        if (verificarEmpate(jogo))
        {
            mostrarTabuleiro(jogo);
            printf("Empate!\n");
            break;
        }

        if (jogador == 'X')
            jogador = 'O';
        else
            jogador = 'X';
    }

    return 0;
}
