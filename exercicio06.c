#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nome[100];
    int i;
    int vogais = 0;
    int consoantes = 0;
    int espacos = 0;
    int quantidade;

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    quantidade = strlen(nome);

    if (nome[quantidade - 1] == '\n')
    {
        nome[quantidade - 1] = '\0';
        quantidade--;
    }

    for (i = 0; nome[i] != '\0'; i++)
    {
        char caractere = tolower(nome[i]);

        if (caractere == 'a' || caractere == 'e' ||
            caractere == 'i' || caractere == 'o' ||
            caractere == 'u')
        {
            vogais++;
        }
        else if (caractere >= 'a' && caractere <= 'z')
        {
            consoantes++;
        }
        else if (caractere == ' ')
        {
            espacos++;
        }
    }

    printf("\nQuantidade de caracteres: %d\n", quantidade);
    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);
    printf("Quantidade de espacos: %d\n", espacos);

    return 0;
}
