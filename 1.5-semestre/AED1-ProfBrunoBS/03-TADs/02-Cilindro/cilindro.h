// cilindro.h

typedef struct cilindro Cilindro;
// float raio, altura;

//inicializa
//destroi
//acessa dados (raio, altura)
//area
//volume
Cilindro* inic_cilindro(float raio, float altura);
void dest_cilindro(Cilindro* cilindro);
float acessa_raio(Cilindro* cilindro);
float acessa_altura(Cilindro* cilindro);
float area_cilindro(Cilindro* cilindro);
float volume_cilindro(Cilindro* cilindro);