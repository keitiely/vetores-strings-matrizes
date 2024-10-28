/*12-Codifique um programa para ler uma matriz quadrada de ordem n e exibir
apenas os elementos da diagonal principal.*/

#include <stdio.h>


int main(){
   int mat[3][3];
    printf("\tDigite os valores da matriz:\n");
    for(int i=0; i<3; i++){
       for(int j=0; j<3; j++){
           printf(" Posicao [%d][%d]: ",i, j);
           scanf("%d", &mat[i][j]);
       }
   }
   printf("\n------------------------");
    printf("\nImprimindo a matriz: \n");
     for(int i=0; i<3; i++){
         printf("\t");
       for(int j=0; j<3; j++){
           printf("%d ", mat[i][j]);
       }
       printf("\n");
   }
   printf("------------------------");
   printf("\nDiagonal da Matriz: \n");
   for(int i=0; i<3; i++){
       for(int j=0; j<3; j++){
           if(j==i)
           printf(" %d ", mat[i][j]);
       }
   }
   
}
