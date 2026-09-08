#include <stdio.h>
#include <stdlib.h>
#include "define.h"

int simbolo_lido;

int main(){
    obtenha_simbolo();
    expr();

    if(simbolo_lido == FIM){
        printf("Expressao Valida\n");
    }else{
        erro("Simbolo inesperado");
    }

    return 0;
}


