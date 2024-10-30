//falta a 14, 16 e 18//
/*14-Codifique um programa para jogar campo minado.
O programa deve solicitar uma posição ao usuário e mostrar o campo,
repetidamente, até que a posição 0,0 seja fornecida ou que o usuário jogue numa posição minada.
representando um campo minado 88. Os limites da matriz devem ser preenchidos com uns e o interior, com 0 ́s
nas posições livres e 9 ́s nas posições contendo bombas. Utilize um parâmetro adicional na sua função para especificar
a "facilidade" do campo minado, de tal modo que quanto maior for a facilidade, menor seja número de bombas no campo.*/
/*14- Codifique um programa para jogar campo minado. O programa deve solicitar
uma posição ao usuário e mostrar o campo, repetidamente,
até que a posição (0,0) seja fornecida ou que o usuário jogue numa posição minada.
representando um campo minado 88. Os limites da matriz devem ser preenchidos
com uns e o interior, com 0 ́s nas posições livres e 9 ́s nas posições contendo bomba
s. Utilize um parâmetro adicional na sua função para especificar a "facilidade" do campo
minado, de tal modo que quanto maior for a facilidade, menor seja número de bombas no campo.*/
#include <stidio.h>
#include <stdlib.h>

typedef struct{
    int eBomba;
    int estaAberta;
    int vizinhos;
}Celula;

//variaveis globais
Celula jogo [10] [10];
int, l, c, tam = 10;

//procedimento para inicializar a matriz do jogo
void inicializarJogo(){
    
    
}

int main(){
    
}
