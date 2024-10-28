/*12-Codifique um programa para ler uma matriz quadrada de ordem n e exibir
apenas os elementos da diagonal principal.*/

#include <stdio.h>
#define t 3

int main(){
   int mat[t][t];
    printf("\tDigite os valores da matriz:\n");
    for(int i=0; i<t; i++){
       for(int j=0; j<t; j++){
           printf(" Posicao [%d][%d]: ",i, j);
           scanf("%d", &mat[i][j]);
       }
   }
   printf("\n------------------------");
    printf("\nImprimindo a matriz: \n");
     for(int i=0; i<t; i++){
         printf("\t");
       for(int j=0; j<t; j++){
           printf("%d ", mat[i][j]);
       }
       printf("\n");
   }
   printf("------------------------");
   printf("\nDiagonal da Matriz: \n");
   for(int i=0; i<t; i++){
       for(int j=0; j<t; j++){
           if(j==i)
           printf(" %d ", mat[i][j]);
       }
   }
   
}
