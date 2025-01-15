#include <stdlib.h>
#include <stdio.h>
#include "complex.h"

int main()
{
    Complex* nc1 = inic_complex(3, -1);
    Complex* nc2 = inic_complex(-5, 2);
    printf("Entrada 1: ");
    printa_complex(nc1);

    printf("Entrada 2: ");
    printa_complex(nc2);

    Complex* soma_nc3 = inic_complex(0, 0);
    soma_nc3 = soma_complex(nc1, nc2);
    printf("Soma: ");
    printa_complex(soma_nc3);

    Complex* sub_nc4 = inic_complex(0 ,0);
    sub_nc4 = subtrai_complex(nc1, nc2);
    printf("Subtracao: ");
    printa_complex(sub_nc4);

    Complex* mult_nc5 = inic_complex(0, 0);
    mult_nc5 = mulitiplica_complex(nc1, nc2);
    printf("Multiplicacao: ");
    printa_complex(mult_nc5);

    info_complex();

    dest_complex(nc1);
    dest_complex(nc2);
    dest_complex(soma_nc3);
    dest_complex(sub_nc4);
    dest_complex(mult_nc5);

    return 0;
}