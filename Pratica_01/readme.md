# Prática de Laboratório

• Compreender o funcionamento de um analisador sintático descendente recursivo.
• Relacionar uma gramática livre de contexto aos procedimentos de um programa.
• Implementar procedimentos recursivos em C.
• Reconhecer expressões sintaticamente válidas e inválidas.
• Identificar e tratar erros sintáticos.

- GRAMÁTICA PRÁTICA:
<expr> ::= <termo> + <expr> | <termo>
<termo> ::= <fator> * <termo> | <fator>
<fator> ::= <primário> ** <fator> | <primário>
<primário> ::= IDENT | NÚMERO | ( <expr> )
