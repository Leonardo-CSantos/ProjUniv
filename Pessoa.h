#include <stdio.h>

class Pessoa
{
    private:
        int diaP;
        int mesP;
        int anoP;
        int idade;

    public:
        Pessoa (int diaNa, int mesNa, int anoNa)
        {
            diaP = diaNa;
            mesP = mesNa;
            anoP = anoNa;
            idade = -1;
        }

        void calculaIdade (int diaAt, int mesAt, int anoAt)
        {
            idade = anoAt - anoP;
            if (mesAt < mesP)
                idade--;
            else if (mesAt == mesP && diaAt < diaP)
                idade--;
        }

        int getIdade ()
        {
            return idade;
        }

};
