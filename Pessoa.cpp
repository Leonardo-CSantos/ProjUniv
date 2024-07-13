#include <stdio.h>

typedef struct Pessoa
{
    int dia;
    int mes;
    int ano;
    int idade;
}Pessoa;

void calculaIdade (Pessoa *p, int diaAt, int mesAt, int anoAt)
{
    p->idade = anoAt - p->ano;
    if (mesAt < p->mes)
        p->idade--;
    else if (mesAt == p->mes && diaAt < p->dia)
        p->idade--;
}

int main ()
{
    Pessoa Einstein, Newton;

    Einstein.dia = 14;
    Einstein.mes = 3;
    Einstein.ano = 1879;
    Einstein.idade = -1;    

    Newton.dia = 4;
    Newton.mes = 1;
    Newton.ano = 1643;
    Newton.idade = -1;

    calculaIdade(&Einstein, 13, 7, 2024);
    calculaIdade(&Newton, 13, 7, 2024);

    printf ("A idade de Einstein seria: %d anos\n", Einstein.idade);
    printf ("A idade de Newton seria: %d anos\n", Newton.idade);
    return 0;
}