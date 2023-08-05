#include <cs50.h>
#include <stdio.h>
#include <string.h>

//maximo de 9
#define MAX 9

// cadastro dos cand
typedef struct
{
    string nome;
    int voto;
}
candidate;

// Array do candidato
candidate candidato[MAX];

// nuemro de candidatos
int count_candi;

bool vote(string nome);
void print_winner(void);

int main(int argc, string argv[])
{
    // fazer a validaçao
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // populaçao
    count_candi = argc - 1;
    if (count_candi > MAX)
    {
        printf("o maximo de numero de candidatos é: %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < count_candi; i++)
    {
        candidato[i].nome = argv[i + 1];
        candidato[i].voto = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // loop para fazer a validaçao dos votos
    for (int i = 0; i < voter_count; i++)
    {
        string nome = get_string("Vote: ");
        if (!vote(nome))
        {
            printf("voto invalido.\n");
        }
    }
    print_winner();
}

bool vote(string nome)
{
    for (int i = 0; i < count_candi; i++)
    {
        // comparar o nomes dos candiatos
        if (strcmp(nome, candidato[i].nome) == 0)
        {
            candidato[i].voto++;
            return true;
        }
    }
    return false;
}

void print_winner(void)
{
    int ganhador_count = 0;

    // achar o cara com mais coto
    for (int i = 0; i < count_candi; i++)
    {
        if (candidato[i].voto > ganhador_count)
        {
            ganhador_count = candidato[i].voto;
        }
    }

    for (int i = 0; i < count_candi; i++)
    {
        if (candidato[i].voto == ganhador_count)
        {
            printf("%s\n", candidato[i].nome);
        }
    }
}
