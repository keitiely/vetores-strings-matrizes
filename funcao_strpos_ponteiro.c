/*10-Codifique a função strpos(s,c) , que devolve a posição da primeira
ocorrência do caracter c na string s ; ou −1 , caso ele não ocorra em s .*/
#include <stdio.h>

int strpos(char *s, char *c) {
    
    int i=0;
    while(*s){
        if(*s==*c)
            return i;

    i++;
    s++;
    }
       return -1;
    

}

int main() {
    char x[20] = "Amigos do bem";  
    char y[20] = "d";

    printf("Chamando a funcao strpos: %d\n", strpos(x, y));  
    
    return 0;
}
