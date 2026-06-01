O repositório contém a estrutura base de um exercício sobre **algoritmos de ordenação** em C, organizado nos seguintes arquivos:

- `ordenacao.h`: declaração das assinaturas das funções que você deve implementar
- `ordenacao.c`: arquivo com a implementação dos algoritmos de ordenação que você deve implementar
- `main.c`: programa principal (já implementado)
- `input/`: arquivos de entrada de diferentes tamanhos e distribuições

Implemente as duas funções em `ordenacao.c`:

```c
void insertion_sort(int *v, int n);
void selection_sort(int *v, int n);
```

## Como compilar, executar e medir o tempo de execução

Use o comando `time` do Linux

```bash
make              # compila
time ./prog < input/crescente/10.txt   # executa com um arquivo de entrada e mede o tempo
```

Para trocar o algoritmo usado, edite `main.c`: comente a linha `insertion_sort(v, n)` e descomente `selection_sort(v, n)`, depois recompile com `make`.

## Formato de entrada

A entrada é lida da entrada padrão (`stdin`):
- Primeira linha: inteiro `N` que representa o número de elementos do vetor
- Segunda linha: `N` inteiros separados por espaço

**Exemplo:**
```
5
3 1 4 1 5
```

## Formato de saída

O programa escreve o vetor ordenado (crescente) no arquivo `ordenados.txt`, com os elementos separados por espaço.

**Exemplo de `ordenados.txt`:**
```
1 1 3 4 5
```

## Tabela de tempos (preencher)

Meça o tempo de execução para cada combinação de algoritmo e distribuição de entrada e preencha a tabela:

| Tamanho (n) | Insertion Sort (Crescente) | Insertion Sort (Decrescente) | Selection Sort (Crescente) | Selection Sort (Decrescente) |
| ----------: | :------------------------: | :--------------------------: | :------------------------: | :--------------------------: |
|          10 |                            |                              |                            |                              |
|          50 |                            |                              |                            |                              |
|         100 |                            |                              |                            |                              |
|         500 |                            |                              |                            |                              |
|        1000 |                            |                              |                            |                              |
|        5000 |                            |                              |                            |                              |
|       10000 |                            |                              |                            |                              |
|       15000 |                            |                              |                            |                              |

**Perguntas:**
1. Qual algoritmo foi mais rápido no vetor já ordenado? Por quê?
2. Qual algoritmo foi mais rápido no vetor inversamente ordenado?
3. O comportamento observado condiz com as complexidades teóricas dos algoritmos?
4. O que aconteceria com um vetor de 1.000.000 de elementos?

