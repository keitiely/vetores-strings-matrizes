/*8- Codifique a função strlen(s) , que devolve o número de caracteres armazenados na string s .
Lembre-se de que o terminador '\0' não faz parte da string e, portanto, não deve ser contado.*/

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
