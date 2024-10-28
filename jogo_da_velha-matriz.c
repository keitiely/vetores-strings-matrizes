/*13-Crie um programa que inicializa e exibe uma matriz 
representando um tabuleiro para o "jogo da velha", conforme a seguir:*/

#include <stdio.h>
#define t 3

int main(){
   char mat[t][t]={'\0','o','x','o','x','o','x','\0','\0'};

   printf("\nJogo da velha: \n\n");
   
   for(int i=0; i<t; i++){
       for(int j=0; j<t; j++){
           if(mat[i][j]=='\0'){
               printf("  ");
           }else{
               printf(" %c", mat[i][j]);
           }
           if(j < t - 1)
               printf(" |");
       }
       printf("\n");
           if(i< t - 1)
                printf("---|---|---\n");
   }
   
}
