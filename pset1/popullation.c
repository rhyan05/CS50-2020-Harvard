#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int ini, fim, n, ano;
    do
    {
        ini = get_int("tamanho ini: "); //solicitação inicial
    }
    while (ini < 9);

    do
    {
        fim = get_int("tamanho final: ");
    }
    while (fim < ini);
    n = ini;
    ano = 0;

    while (n < fim)
    {
        n = n + (n / 3) - (n / 4);
        ano++;
    }
    printf("ano: %i\n", ano);
}
