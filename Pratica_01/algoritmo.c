
#include <stdio.h>
#include <stdlib.h>
#include "define.h"

int posicao = 0;

int tokens[] = {IDENT, MAIS, NUMERO, MULT, IDENT, FIM};

void obtenha_simbolo(void) {

    simbolo_lido = tokens[posicao];

    if (simbolo_lido != FIM) {
        posicao += 1;
    }
}


void erro(const char *mensagem){
    int i = 0;
    for(i = 0; mensagem[i] != '\0'; i += 1){
        printf("%c", mensagem[i]);
    }
    printf("\n");
}




void expr(void){
    termo();

    if(simbolo_lido == MAIS){
        obtenha_simbolo();
        expr();
    }
}



void termo(void){
    fator();

    if(simbolo_lido == MULT){
        obtenha_simbolo();
        termo();
    }
}


void fator(void){
    primario();

    if(simbolo_lido == POTENCIA){
        obtenha_simbolo();
        fator();
    }
}



void primario(void){

    if(simbolo_lido == IDENT){
        obtenha_simbolo();
    }else if(simbolo_lido == NUMERO){
        obtenha_simbolo();
    }else if(simbolo_lido == ABRE_PAR){
        obtenha_simbolo();
        expr();

        if(simbolo_lido != FECHA_PAR){
            erro("Falta ')'");
        }else{
            obtenha_simbolo();
        }
    }else{
        erro("Primario invalido");
    }
}
