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

## Resultados dos Testes

### Expressões Válidas

#### 1. IDENT

**Resultado:**

```text
Expressao Valida
```

**Print do terminal:**

![Teste 01](doc/teste_01.png)

---

#### 2. IDENT + NUMERO

**Resultado:**

```text
Expressao Valida
```

**Print do terminal:**

![Teste 02](doc/teste_02.png)

---

#### 3. IDENT * NUMERO

**Resultado:**

```text
Expressao Valida
```

**Print do terminal:**

![Teste 03](doc/teste_03.png)

---

#### 4. IDENT ** NUMERO

**Resultado:**

```text
Expressao Valida
```

**Print do terminal:**

![Teste 04](doc/teste_04.png)

---

#### 5. ( IDENT + NUMERO )

**Resultado:**

```text
Expressao Valida
```

**Print do terminal:**

![Teste 05](doc/teste_05.png)

---

#### 6. IDENT + NUMERO * IDENT

**Resultado:**

```text
Expressao Valida
```

**Print do terminal:**

![Teste 06](doc/teste_06.png)

---

### Expressões Inválidas

#### 7. IDENT +

**Resultado:**

```text
Primario invalido
```

**Print do terminal:**

![Teste 07](doc/teste_07.png)

---

#### 8. ( IDENT + NUMERO

**Resultado:**

```text
Falta ')'
```

**Print do terminal:**

![Teste 08](doc/teste_08.png)

---

#### 9. IDENT * + NUMERO

**Resultado:**

```text
Primario invalido
```

**Print do terminal:**

![Teste 09](doc/teste_09.png)

---

#### 10. + IDENT

**Resultado:**

```text
Primario invalido
```

**Print do terminal:**

![Teste 10](doc/teste_10.png)

---

### Teste Adicional

#### 11. Sequência sem FIM

```text
IDENT, MAIS, NUMERO, MULT, IDENT
```

**Resultado:**

```text
Simbolo inesperado
```

**Print do terminal:**

![Teste 11](doc/teste_11.png)