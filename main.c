#include <stdio.h>
#include <stdlib.h>

void PreencherHistograma(char *h[], int V, int C) {
    for (int i = 0; i < V; i++) {
        h[C][i] = '*';
    }
}

void imprimir_histograma(char *h[], int V[], int C) {
    for (int i = 0; i < C; i++) {
        printf("%d", V[i]);
        for (int j = 0; j < V[i]; j++) {
            printf("%c", h[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}

int main() {
    int C;
    scanf("%d", &C);

    int V[C];
    char *histograma[C];

    for (int i = 0; i < C; i++) {
        scanf("%d", &V[i]);
        if (V[i] == 0) {
            histograma[i] = NULL;
        } else {
            histograma[i] = (char *)malloc(V[i] * sizeof(char));
            PreencherHistograma(histograma, V[i], i);
        }
    }

    imprimir_histograma(histograma, V, C);

    for (int i = 0; i < C; i++) {
        if (histograma[i] != NULL) {
            free(histograma[i]);
        }
    }

    return 0;
}
