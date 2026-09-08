# Prática de Laboratório

## Objetivos

- Compreender o funcionamento de um analisador sintático descendente recursivo.
- Relacionar uma gramática livre de contexto aos procedimentos de um programa.
- Implementar procedimentos recursivos em C.
- Reconhecer expressões sintaticamente válidas e inválidas.
- Identificar e tratar erros sintáticos.

## Gramática da Prática

A gramática utilizada no analisador sintático é definida pelas seguintes produções:

1. `<expr> ::= <termo> + <expr> | <termo>`
2. `<termo> ::= <fator> * <termo> | <fator>`
3. `<fator> ::= <primário> ** <fator> | <primário>`
4. `<primário> ::= IDENT | NÚMERO | ( <expr> )`

## Roteiro da Atividade

O roteiro completo utilizado para o desenvolvimento da prática está disponível em:

[Roteiro — Analisador Sintático Descendente Recursivo](doc/Roteiro_Laboratorio_Analisador_Sintatico_Descendente_Recursivo.pdf)