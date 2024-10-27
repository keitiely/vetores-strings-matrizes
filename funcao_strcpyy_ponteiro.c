/*7-Codifique a função strcpy(s,t) , que copia o conteúdo da string t para a string s.
Essa função é útil quando precisamos realizar atribuição entre strings;
por exemplo, para atribuir a constante "teste" a uma string x,
basta escrever strcpy(x,"teste") .*/

#include <stdio.h>

void strcpyy(char *s, char *t){
    
    while(*t != '\0'){
        *s=*t;
        s++;
        t++;
    }
   
}

int main(){
    char x[10];

    printf("Chamando a funcao strcpyy...\n");
    printf("----------------------------\n");
    strcpyy(x, "teste");
    printf("String X: %s", x);
}
