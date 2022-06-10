#include <stdio.h>
#include <stdlib.h>

#define MAXIMO 10

//Variaveis
int tamanho = 0;
int grafo[MAXIMO];
int ma[MAXIMO][MAXIMO];
int op = 1;

//Prototipacao
int grafo_tamanho();
void grafo_desenhar();
void grafo_desenhar_ma();
void grafo_inserir();
void grafo_remover();
void menu_mostrar();


int main()
{
    printf("Hello world!\n");
    return 0;
}
