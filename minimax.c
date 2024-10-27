/*4- Codifique a função minimax(v,n,a,b) , que recebe um vetor v contendo 
n números reais e devolve em a e b, respectivamente,
os valores mínimo e máximo entre aqueles armazenados em v .*/

#include <stdio.h>
void minimax(int n, float v[], float *a, float *b){
    *a=v[0];
    *b=v[0];
    for(int i=0; i<n; i++){
        if(v[i] < *a)
            *a=v[i];
        if(v[i] > *b)
            *b=v[i];
        
    }
}


int main(){
    int t;
    float y=0, x=0;
    
    printf("Digite o tamanho do seu vetor: ");
    scanf("%d", &t);
    
    float v[t];
    printf("Digite os valores:\n");
    for(int i=0; i<t; i++){
        printf("Valor %d: ", i+1);
        scanf("%f", &v[i]);
    }
    printf("------------------\n");
    minimax(t, v, &x, &y);
    printf("Valor minimo: %.2f\n", x);
    printf("Valor maximo: %.2f", y);
    
    return 0;
}
