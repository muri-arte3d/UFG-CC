// número complexo
// complex.h

typedef struct complex Complex; // double real, imaginaria

//Cria, destroi, acessa real, acessa imag, soma, subtrai, multiplica, info
Complex* inic_complex(double real, double imag);
void dest_complex(Complex* nc);
double acessa_real(Complex* nc);
double acessa_imag(Complex* nc);
Complex* soma_complex(Complex* nc1, Complex* nc2);
Complex* subtrai_complex(Complex* nc1, Complex* nc2);
Complex* mulitiplica_complex(Complex* nc1, Complex* nc2);
void printa_complex(Complex* nc);
void info_complex(void);