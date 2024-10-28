/*11-Codifique a função strdel(s,p) , que remove o caracter existente na posição
p da string s . Se a posição p não existe em s, nada é feito.*/

#include <stdio.h>
void strdel(char *s, char *p){
   while(*s){
        if(*s==*p){
           char *del= s;
           
           while(*del){
               *del=*(del + 1);
                del++;
           }
        }
    s++;
    }
}

int main(){
    char x[20]="delete";
    char y[20]="e";
    
    strdel(x, y);
    printf("Chamando a funcao strdel para remover o caracter 'e' da palavra delete: %s", x);
    return 0;
}
