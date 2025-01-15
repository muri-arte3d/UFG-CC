#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

struct complex
{
    double real;
    double imag;
};

Complex* inic_complex(double real, double imag)
{
    Complex* nc = (Complex*) malloc(sizeof(Complex));
    if (nc != NULL)
    {
        nc->real = real;
        nc->imag = imag;
    }
    return nc;
}

void dest_complex(Complex* nc)
{
    free(nc);
}

double acessa_real(Complex* nc)
{
    return nc->real;
}

double acessa_imag(Complex* nc)
{
    return nc->imag;
}

Complex* soma_complex(Complex* nc1, Complex* nc2)
{
    Complex* nc = (Complex*) malloc(sizeof(Complex));
    if (nc != NULL)
    {
        nc->real = nc1->real + nc2->real;
        nc->imag = nc1->imag + nc2->imag;
    }
    return nc;
}

Complex* subtrai_complex(Complex* nc1, Complex* nc2)
{
    Complex* nc = (Complex*) malloc(sizeof(Complex));
    if (nc != NULL)
    {
        nc->real = nc1->real - nc2->real;
        nc->imag = nc1->imag - nc2->imag;
    }
    return nc;
}

Complex* mulitiplica_complex(Complex* nc1, Complex* nc2)
{
   Complex* nc = (Complex*) malloc(sizeof(Complex));
    if (nc != NULL)
    {
        nc->real = nc1->real * nc2->real - nc1->imag * nc2->imag;
        nc->imag = nc1->real  * nc2->imag + nc1->imag * nc2->real;
    }
    return nc; 
}

void printa_complex(Complex* nc)
{
    printf("(%.2lf) + (%.2lfi)\n", nc->real, nc->imag);
}

void info_complex(void)
{
    printf("Mais informacoes: \n");
    printf("- https://brasilescola.uol.com.br/matematica/numeros-complexos.htm\n");
    printf("- https://www.ncl.ac.uk/webtemplate/ask-assets/external/maths-resources/core-mathematics/pure-maths/algebra/complex-arithmetic.html\n");
}
