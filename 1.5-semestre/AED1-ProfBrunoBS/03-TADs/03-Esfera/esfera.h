// esfera.h

typedef struct esfera Esfera; // float raio

//Criar, Destroi, Acessa raio, Area, Volume
Esfera* inic_esfera(float raio);
void dest_esfera(Esfera* e);
float acessa_raio(Esfera* e);
float area_esfera(Esfera* e);
float volume_esfera(Esfera* e);