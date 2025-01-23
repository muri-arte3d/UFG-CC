// lista.h
/*Lista estática de inteiros
1. Criação da lista.
2. Inicialização da lista.
3. Liberação da lista.
4. Tamanho da lista.
5. Verificação de lista vazia.
6. Verificação de lista cheia.
7. Inserção no início da lista.
8. Inserção no meio (ordenada) da lista.
9. Inserção no fim da lista.
10. Remoção no início da lista.
11. Remoção no meio (ordenada) da lista.
12. Remoção no fim da lista.
13. Consulta de um elemento a partir do seu valor.
14. Consulta de um elemento a partir do seu índice.
15. Impressão da lista.
 */
#define SUCESSO 1
#define FALHA -1
#define TAMANHO_MAXIMO_LISTA 5

typedef struct elemento
{
    unsigned int chave;
    int dado;
} Elemento;

typedef struct lista
{
    unsigned int tamanho;
    Elemento elementos[TAMANHO_MAXIMO_LISTA];
} Lista;

//1. Criação da lista.
Lista* criaLista();

//2. Inicialização da lista.
int inicializaLista(Lista* lista);

//3. Liberação da lista.
void liberaLista(Lista* lista);

//4. Tamanho da lista.
int tamanhoLista(Lista* lista);

//5. Verificação de lista vazia.
int verificaListaVazia(Lista* lista);

//6. Verificação de lista cheia.
int verificaListaCheia(Lista* lista);

//7. Inserção no início da lista.
int inserirInicio(Lista* lista, Elemento elemento);

//8. Inserção no meio (ordenada) da lista.
int inserirMeio(Lista* lista, Elemento elemento);

//9. Inserção no fim da lista.
int inserirFim(Lista* lista, Elemento elemento);

//10. Remoção no início da lista.
Elemento removeInicio(Lista* lista);

//11. Remoção no meio (ordenada) da lista.
Elemento removeMeio(Lista* lista);

//12. Remoção no fim da lista.
Elemento removeFim(Lista* lista);

//13. Consulta de um elemento a partir do seu valor.
Elemento consultaValor(Lista* lista, int valor);

//14. Consulta de um elemento a partir do seu índice.
Elemento consultaIndice(Lista* lista, int indice);

//15. Impressão da lista.
void imprimeLista(Lista* lista);