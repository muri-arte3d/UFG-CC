// inventario.h

#define SUCESSO 1
#define FALHA -1
#define MAX_ITENS 50
#define MAX_NOME_ITEM 20
#define SLOT_VAZIO 0
#define BAG_VAZIA 0

typedef struct item Item;
typedef struct inventario Inventario;

//Funções de suporte
Inventario *criaInventario();
int inicializaInventario(Inventario *inventario);
int inventarioVazio(Inventario *inventario);
int inventarioCheio(Inventario *inventario);
int inventarioPesoMAX(Inventario *inventario);

//Funções da questão
int addItem(Inventario *inventario, Item item, int quantidade);
int removeItem(Inventario *inventario, char nome[], int qtd);
int procuraItem(Inventario *inventario, char nome[]);
int pesoTotal(Inventario *inventario);
void imprimeInventario(Inventario *inventario);