/*15- Usando as funções randomize() e random() , ambas definidas em stdlib.h ,
crie uma função para preencher, aleatoriamente, uma matriz 10x10*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define t 10

void preencher_mat(int mat[t][t]){
    srand(time (NULL));
    
    for(int i=0; i<t; i++){
       for(int j=0; j<t; j++){
        mat[i][j]= (rand() % 10);
       }
   }
}
int main(){
   
   int matriz[t][t];

    preencher_mat(matriz);
    printf(" Imprimindo a matriz com numeros aleatorios de 0 a 9: \n\n");
     for(int i=0; i<t; i++){
         printf("\t");
       for(int j=0; j<t; j++){
           printf("%d ", matriz[i][j]);
       }
       printf("\n");
   }
}
