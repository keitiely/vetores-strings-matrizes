/*6- Usando ponteiros, codifique a função puts(s) , que exibe uma string
s no vídeo e, depois, muda o cursor de linha.*/

#include <stdio.h>

void putss(char *s){
    
    while(*s){
        putchar(*s);
        s++;
    }
   putchar('\n');
}

int main(){
    char str[100];
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("-----------------\n");
    printf("String digitada:\n");
    putss(str);
    
}
