/*17-Além da adição de ponteiros com inteiros, uma outra operação possível é
a subtração entre ponteiros do mesmo tipo. Quando um ponteiro é subtraído de outro,
o resultado é o número de elementos existentes no espaço de memória compreendido entre os endereços apontados por eles.
Usando essa idéia, codifique a função strlen(s) , que devolve o número de caracteres existentes numa string s.*/

#include <stdio.h>

int strlenn(char *s){
    int contador=0;
    while(*s != '\0'){
        s++;
        contador++;
    }
    return contador-1;
   
}

int main(){
    char str[100];
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("-----------------------\n");
    printf("Tamanho da string: %d\n", strlenn(str));
    
    
}
