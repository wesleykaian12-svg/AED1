#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    scanf("%d", &N);

    int *fila = (int *) malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &fila[i]);
    }

    scanf("%d", &M);
    int *saidas = (int *) malloc(M * sizeof(int));

    int limite = 100001;
    char *saiu = (char *) calloc(limite, sizeof(char));

    for (int i = 0; i < M; i++) {
        scanf("%d", &saidas[i]);
        if (saidas[i] < limite)
            saiu[saidas[i]] = 1;
    }

    
    int primeiro = 1;
    for (int i = 0; i < N; i++) {
        if (fila[i] < limite && saiu[fila[i]] == 0) {
            if (!primeiro) printf(" ");
            printf("%d", fila[i]);
            primeiro = 0;
        }
    }
    printf("\n");

    free(fila);
    free(saidas);
    free(saiu);

    return 0;
}
