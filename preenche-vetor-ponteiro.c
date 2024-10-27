/*5- Usando ponteiros, codifique a função carrega(v,n) ,
que preenche um vetor v com n valores lidos do teclado.*/
#include <stdio.h>
void carrega(int n, int *vetor){

     for(int i=0; i<n; i++){
         printf("Digite o valor %d: ", i+1);
         scanf("%d", &vetor[i]);
     }
}

int main(){
    int t;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &t);
    
    int v[t];
    carrega(t, v);
    
     printf("Vetor preenchido! \n");
     printf("-----------------\n");
     printf("Valores do vetor: \n");
     for(int i=0; i<t; i++){
         printf("%d ", v[i]);
     }
    
}
