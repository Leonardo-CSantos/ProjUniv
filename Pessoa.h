#include <stdio.h>

class Pessoa
{
    private:
        int diaP;
        int mesP;
        int anoP;
        int idade;

    public:
        Pessoa (int diaNa, int mesNa, int anoNa);
        void calculaIdade (int diaAt, int mesAt, int anoAt);
        int getIdade ();
        void printIdade ();

};
