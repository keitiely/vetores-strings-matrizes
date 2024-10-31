/*18-A biblioteca padrão da linguagem C oferece uma função polimórfica para ordenação de vetores cujo protótipo é o seguinte:
      void qsort(void *v, int n, int t, int (*c)(const void *,const void *));
sendo v um ponteiro para o vetor a ser ordenado,
n o número de elementos no vetor, t o tamanho em bytes de cada
elemento e c um ponteiro para a função de comparação a ser usada durante ordenação.
A novidade nesse protótipo é o tipo void∗ , que serve para declarar ponteiros capazes de receber qualquer tipo de endereço.
Isso quer dizer que, por exemplo, o parâmetro v pode receber como valor inicial tanto o endereço de um vetor de caracteres quanto
o endereço de um vetor de números reais ou ainda um vetor de estruturas. O único problema com ponteiros void é que não é permitido
o acesso a dados a partir deles e, portanto, temos que usar casts com eles. Com base nessas informações, crie um vetor de estruturas
e tente ordená-lo por cada um de seus campos, um de cada vez, usando a função qsort() .*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

// Definindo a estrutura para representar cada item
typedef struct {
    int codigo;
    float valor;
    char nome[50];
} Item;

// Função de comparação para ordenar por código
int compara_codigo(const void *a, const void *b) {
    return ((Item *)a)->codigo - ((Item *)b)->codigo;
}

// Função de comparação para ordenar por valor
int compara_valor(const void *a, const void *b) {
    float valorA = ((Item *)a)->valor;
    float valorB = ((Item *)b)->valor;
    return (valorA > valorB) - (valorA < valorB);
}

// Função de comparação para ordenar por nome
int compara_nome(const void *a, const void *b) {
    return strcmp(((Item *)a)->nome, ((Item *)b)->nome);
}

// Função para imprimir o vetor de itens
void imprime_vetor(Item vetor[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d: %.2f, %s\n", vetor[i].codigo, vetor[i].valor, vetor[i].nome);
    }
    printf("\n");
}

int main() {
    // Criando um vetor de itens
    Item vetor[N] = {
        {3, 20.5, "Item C"},
        {1, 10.0, "Item A"},
        {2, 15.0, "Item B"},
        {5, 5.5, "Item E"},
        {4, 30.2, "Item D"}
    };

    printf("Vetor original:\n");
    imprime_vetor(vetor, N);

    // Ordenando por código
    qsort(vetor, N, sizeof(Item), compara_codigo);
    printf("Ordenado por código:\n");
    imprime_vetor(vetor, N);

    // Ordenando por valor
    qsort(vetor, N, sizeof(Item), compara_valor);
    printf("Ordenado por valor:\n");
    imprime_vetor(vetor, N);

    // Ordenando por nome
    qsort(vetor, N, sizeof(Item), compara_nome);
    printf("Ordenado por nome:\n");
    imprime_vetor(vetor, N);

    return 0;
}

