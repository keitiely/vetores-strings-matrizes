/*9-Codifique a função strcat(s,t) , que concatena a string t ao final da string s .
Por exemplo, se x armazena "facil" e y armazena "idade", após a
chamada strcat(x,y) , x estará armazenando "facilidade".*/
#include <stdio.h>

void strcaty(char *s, const char *t) {
    
    while (*s) {
        s++;
    }

    while (*t) {
        *s = *t;
        s++;
        t++;
    }
    *s='\0';

}

int main() {
    char x[10] = "facil";  
    char y[10] = "idade";  

    strcaty(x, y); 

    printf("Chamando a funcao strcaty: %s\n", x);  
    
    return 0;
}
