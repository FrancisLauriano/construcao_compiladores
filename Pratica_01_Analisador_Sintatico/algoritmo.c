
#include <stdio.h>
#include <stdlib.h>
#include "define.h"

int posicao = 0;


// // teste 1: IDENT
// int tokens[] = {IDENT, FIM};

// // teste 2: IDENT + NUMERO
// int tokens[] = {IDENT, MAIS, NUMERO, FIM};

// // teste 3: IDENT * NUMERO
// int tokens[] = {IDENT, MULT, NUMERO, FIM};

// // teste 4: IDENT ** NUMERO
// int tokens[] = {IDENT, POTENCIA, NUMERO, FIM};

// // teste 5. ( IDENT + NUMERO )
// int tokens[] = {ABRE_PAR, IDENT, MAIS, NUMERO, FECHA_PAR, FIM};

// // teste 6. IDENT + NUMERO * IDENT
// int tokens[] = {IDENT, MAIS, NUMERO, MULT, IDENT, FIM};

// // teste 7: IDENT +
// int tokens[] = {IDENT, MAIS, FIM};

// // teste 8: ( IDENT + NUMERO
// int tokens[] = {ABRE_PAR, IDENT, MAIS, NUMERO, FIM};

// // teste 9: IDENT * + NUMERO
// int tokens[] = {IDENT, MULT, MAIS, NUMERO, FIM};

// // teste 10: + IDENT
// int tokens[] = {MAIS, IDENT, FIM};

// teste 11: sem "FIM"
int tokens[] = {IDENT, MAIS, NUMERO, MULT, IDENT};


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

    exit(1);
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
