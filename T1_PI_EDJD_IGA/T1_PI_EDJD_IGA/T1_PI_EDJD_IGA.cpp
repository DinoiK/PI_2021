#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
FILE* IGA_jogadores;
FILE* IGA_jogos;

int tam = 0;
const char* command;

struct{
    int cod_player, pg_player;
    char nome_player[50];
    
}jogador[2];
struct {
    int cod_jogo,n_pontos;

}jogo[15];


void intro_player() {


}

void jogo_guess_number() {


}
void jogo_guess_card() {


}


int main()
{
    
    int op,pg,ps;

    do {
        printf("\n\t......................IPCA ARCH GAMES......................");
        printf("\n\t\t Pontos GLobais:%d", pg); printf("\n\t101-TOP 10 Global");
        printf("\n\n\t\t1-Introduzir Jogador");

        printf("\n\n\t\t2-"); printf("\tPontos:%d", ps); printf("\n\t22-TOP 10");
        printf("\n\t\t3-"); printf("\tPontos:%d", ps); printf("\n\t33-TOP 10");
        printf("\n\t\t0-Sair");


        switch (op) {

        case 1: {
            //system(cls);
            intro_player();
            break;
        }
        case 2: {
            //system(cls);
            intro_player();
            break;
        }
        case 0:break;
        }

    } while (op != 0);
}


