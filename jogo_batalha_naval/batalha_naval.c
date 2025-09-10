#include <stdio.h>
int main(){
    //código do tabuleiro
        int matriz[10][10]= { // [j][i]
            { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0},
            { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0},
            { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0},
            { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0},
            { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0},
            { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0},
            { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0},
            { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0},
            { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0},
            { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0},

        };

        // Código para inserir os navios no tabuleiro

        int linha_navio = 2; //[j] esse 2 é a posição inicial que o navio vai ocupar
        int coluna_navio = 1; //[i] esse 1 é a posição inicial que o navio vai ocupar

        for (int i = 0; i < 3; i++) {
         
        matriz[linha_navio][coluna_navio + i] = 3; // ou seja "matriz [2][1 + i] = 3 posições"
        }

        int linha_navio2 = 5; //[j] esse 5 é a posição inicial que o navio vai ocupar
        int coluna_navio2 = 7; //[i] esse 7 é a posição inicial que o navio vai ocupar
        for (int i=0; i< 3; i++){

        matriz[linha_navio2 + i][coluna_navio2] = 3; // ou seja "matriz [5 + i][7] = 3 posições"
        }

        //Identificação do tabuleiro e sua exibição
        int j, i;
        printf("A B C D E F G H I J\n"); 
        for (j = 0; j < 10; j++) {
        printf("%d ", j); // numeração das linhas
        for (i = 0; i < 10; i++) {
        printf("%d ", matriz[j][i]);
        }
        printf("\n");
        }    

       
    return 0;
}