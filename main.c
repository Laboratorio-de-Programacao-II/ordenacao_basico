#include <stdio.h>
#include <time.h>
#include "ordenacao.h"

#define MAX_N 100000

int main() {
    int v[MAX_N];
    int n;

    /* Lê o tamanho do vetor */
    scanf("%d", &n);

    /* Lê os elementos do vetor */
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    /* =====================================================
     * O algoritmo padrão chamado é o insertion_sort.
     * Para testar o selection_sort, comente a linha do
     * insertion_sort e descomente a do selection_sort.
     * ===================================================== */
    insertion_sort(v, n);
    /* selection_sort(v, n); */

    /* Escreve o resultado no arquivo ordenados.txt */
    FILE *saida = fopen("ordenados.txt", "w");
    if (saida == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo de saida.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) fprintf(saida, " ");
        fprintf(saida, "%d", v[i]);
    }
    fprintf(saida, "\n");

    fclose(saida);
    return 0;
}
