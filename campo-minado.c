/*14 e 16- Codifique um programa para jogar campo minado. O programa deve solicitar
uma posição ao usuário e mostrar o campo, repetidamente,
até que a posição (0,0) seja fornecida ou que o usuário jogue numa posição minada.
representando um campo minado 8X8. Os limites da matriz devem ser preenchidos
com uns e o interior, com 0 ́s nas posições livres e 9 ́s nas posições contendo bomba
s. Utilize um parâmetro adicional na sua função para especificar a "facilidade" do campo
minado, de tal modo que quanto maior for a facilidade, menor seja número de bombas no campo.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*  Celula
    eBomba 0 ou 1
    estaAberta 0 ou 1
    vizinhos 0 ou 4
*/
    
typedef struct{
    int eBomba;
    int estaAberta;
    int vizinhos;
}Celula;

//variaveis globais
Celula jogo [10] [10];
int l, c, tam = 10;

//procedimento para inicializar a matriz do jogo
void inicializarJogo(){
    for(l=0; l < tam; l++){
        for(c=0; c < tam; c++){
            jogo[l][c].eBomba = 0;
            jogo[l][c].estaAberta = 0;
            jogo[l][c].vizinhos = 0;
            
        }
    }
    
}
//procedimento para sortear n bombas
void sortearBombas(int n){
     int i = 0;
    srand(time(NULL));

    while(i < n){
        l = rand() % tam;
        c = rand() % tam;
        
        // Coloca a bomba apenas se a posição ainda não tiver uma, 
        //verifica para garantir as 10 bombas sem repetir indices
        if(jogo[l][c].eBomba == 0){
            jogo[l][c].eBomba = 1;
            i++;  // Incrementa i somente quando uma nova bomba é colocada
        }
    }
}

/*
    funcao que diz se um par de coordenados e valido ou nao(ex: se for negativo)
    se retornar 1 e valido
    se retornar 0 nao e valida
*/
int coordenadaEhValida(int l, int c){
    if(l >= 0 && l < tam && c >=0 && c < tam)
        return 1;
    else 
        return 0;
}

/*  
    funcao que retorna a quantidade de bombas na vizinhaca de l e c
    n - quantidade de bombas
*/
int quantBombasVizinhas(int l, int c){
    /* posicao acima l - 1 e c
       posicao abaixo l + 1 e c
       posicao a direita l e c + 1
       posicao a esquerda l e c - 1
    */
    int quantidade = 0;
    
    if(coordenadaEhValida(l - 1, c) && jogo[l-1][c].eBomba) //se for valida return 0
        quantidade++;
    if(coordenadaEhValida(l + 1, c) && jogo[l+1][c].eBomba) 
        quantidade++;
    if(coordenadaEhValida(l, c + 1) && jogo[l][c + 1].eBomba) 
        quantidade++;
    if(coordenadaEhValida(l, c - 1) && jogo[l][c - 1].eBomba) 
        quantidade++;
    return quantidade;
}

//procedimento para contar as bombas vizinhas
void contarBombas(){
    for(l=0; l < tam; l++){
        for(c=0; c < tam; c++)
            jogo[l][c].vizinhos = quantBombasVizinhas(l, c);
    }
}
// Procedimento para imprimir o jogo
void imprimir(){
    printf("\n\n\t    ");
    for(l = 0; l < tam; l++)
        printf(" %d  ", l);   //indices das colunas
    printf("\n\t   -----------------------------------------\n");
    for(l=0; l < tam; l++){
        printf("\t%d  |", l);  //indices das linhas
        for(c=0; c < tam; c++){
            //abriu e se for uma bomba imprime * , se nao imprime a qntd de vizinhos
            if(jogo[l][c].estaAberta){ 
                if(jogo[l][c].eBomba)
                    printf(" * ");
                else
                    printf(" %d ", jogo[l][c].vizinhos);
            }
            else
                printf("   ");
            printf("|");
        }
        printf("\n\t   -----------------------------------------\n");
    }    
}
 //procedimento para abrir a coordenada digitada pelo usuario e abrir vizinhos
void abrirCelula(int l, int c){
    if(coordenadaEhValida(l, c) == 1 && jogo[l][c].estaAberta == 0){
    
    jogo[l][c].estaAberta = 1;
    if(jogo[l][c].vizinhos == 0){
        /*
            vizinho acima l-1 e c
            vizinho abaixo l+1 e c
            vizinho direita l e c+1
            vizinho esquerda l e c-1
        */
        abrirCelula(l-1, c);//chamada recursiva para abrir celulas vizinhas
        abrirCelula(l+1, c);
        abrirCelula(l, c+1);
        abrirCelula(l, c-1);
    }
 }
}
/*
    funcao para verificar vitoria
    1- ganhou
    0- nao ganhou ainda
*/
int ganhou(){
    int quantidade = 0;
    
     for(l=0; l < tam; l++){
        for(c=0; c < tam; c++){
            if(jogo[l][c].estaAberta == 0 && jogo[l][c].eBomba == 0)//verifica se esta fechada e se este campo nao tem bomba
                quantidade++;
        }
    }
    return quantidade;//indica se ganhou == 0 e tambem indica quantas posicao fechadas nao sao bombas
}


 // procedimento jogo que faz a leitura das coordenadas
void jogar(){
    int linha, coluna;
    do{
        imprimir();
        do{
            printf("\nDigite as coordenadas de linha e coluna: ");
            scanf("%d%d", &linha, &coluna);
        
            if(coordenadaEhValida(linha, coluna) == 0 || jogo[linha][coluna].estaAberta == 1)
                printf("\nCoordenada invalida ou já aberta!");
        }while(coordenadaEhValida(linha, coluna) == 0 || jogo[linha][coluna].estaAberta == 1);//verificar se esta fechada
        
        abrirCelula(linha, coluna);
    }while(ganhou() != 0 && jogo[linha][coluna].eBomba == 0);//vai repetir enquanto ele nao ganhar e enquanto nao abrir bomba

    if(jogo[linha][coluna].eBomba == 1)
        printf("\n\tGame Over! \n");
    else
        printf("\n\t\nVictory!!\n");
        
    imprimir();
}

int main(){
    int opcao;
    do{
        inicializarJogo();
        sortearBombas(10);
        contarBombas();
        printf("\n\t\t\tCAMPO MINADO\n");
        jogar();
        
        printf("\nDigite 1 para jogar novamente: ");
        scanf("%d", &opcao);
    }while(opcao == 1);
    
    return 0;
}



