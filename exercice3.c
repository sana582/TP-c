#include <stdio.h>
#include <stdlib.h>

int** SaisirMatrice(int* lignes, int* colonnes) {
    printf("Nombre de lignes : ");
    scanf("%d", lignes);
    printf("Nombre de colonnes : ");
    scanf("%d", colonnes);

    int** mat = malloc(*lignes * sizeof(int*));
    for (int i = 0; i < *lignes; i++)
        mat[i] = malloc(*colonnes * sizeof(int));

    printf("Saisir les éléments de la matrice :\n");
    for (int i = 0; i < *lignes; i++)
        for (int j = 0; j < *colonnes; j++) {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }

    return mat;
}

void AfficherMatrice(int** mat, int lignes, int colonnes) {
    printf("Matrice :\n");
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}

int** MaxLigne(int** mat, int lignes, int colonnes) {
    int** maxLig = malloc(lignes * sizeof(int*));
    for (int i = 0; i < lignes; i++) {
        maxLig[i] = malloc(colonnes * sizeof(int));
        int max = mat[i][0];
        for (int j = 1; j < colonnes; j++)
            if (mat[i][j] > max)
                max = mat[i][j];
        for (int j = 0; j < colonnes; j++)
            maxLig[i][j] = (mat[i][j] == max) ? 1 : 0;
    }
    return maxLig;
}

int** MinColonne(int** mat, int lignes, int colonnes) {
    int** minCol = malloc(lignes * sizeof(int*));
    for (int i = 0; i < lignes; i++)
        minCol[i] = malloc(colonnes * sizeof(int));

    for (int j = 0; j < colonnes; j++) {
        int min = mat[0][j];
        for (int i = 1; i < lignes; i++)
            if (mat[i][j] < min)
                min = mat[i][j];
        for (int i = 0; i < lignes; i++)
            minCol[i][j] = (mat[i][j] == min) ? 1 : 0;
    }
    return minCol;
}

void TrouvePointsClos(int** mat, int** maxLig, int** minCol, int lignes, int colonnes) {
    printf("\nPoints-Clos MaxLignes :\n");
    int found = 0;
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            if (maxLig[i][j] == 1 && minCol[i][j] == 1) {
                printf("Valeur : %d à [Ligne %d, Colonne %d]\n", mat[i][j], i, j);
                found = 1;
            }
        }
    }
    if (!found)
        printf("Aucun point-clos trouvé.\n");
}

void LibererMatrice(int** mat, int lignes) {
    for (int i = 0; i < lignes; i++)
        free(mat[i]);
    free(mat);
}


int main() {
    int lignes, colonnes;
    int** mat = SaisirMatrice(&lignes, &colonnes);

    AfficherMatrice(mat, lignes, colonnes);

    int** maxLig = MaxLigne(mat, lignes, colonnes);
    int** minCol = MinColonne(mat, lignes, colonnes);

    TrouvePointsClos(mat, maxLig, minCol, lignes, colonnes);

    // Libération mémoire
    LibererMatrice(mat, lignes);
    LibererMatrice(maxLig, lignes);
    LibererMatrice(minCol, lignes);

    return 0;
}
