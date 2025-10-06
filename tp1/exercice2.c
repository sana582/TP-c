#include <stdio.h>
void saisir(int mat[][10], int n) {
    printf("Saisir les elements de la matrice %dx%d :\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
}
void afficher(int mat[][10], int n) {
    printf("Matrice %dx%d :\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}
void additionner(int A[][10], int B[][10], int C[][10], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
}
void multiplier(int A[][10], int B[][10], int C[][10], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}
void menu (){
    printf("selectioner votre choix :");
    printf("1-saisir");
    printf("2-afficher");
    printf("3-additionner");
    printf("4-multiplier");
}
int main() {
    int n;
    int A[10][10], B[10][10], C[10][10];
    int choix;

    printf("Donner la taille de la matrice carrée : ");
    scanf("%d", &n);
    do{ 
        menu();
        printf("Votre choix : ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
           printf("Saisir de la matrice A:");
           saisir(A,n);
           printf("Saisir de la matrice B :");
           saisir(A,n);
            break;
        case2:
          printf("affichage de la matrice A:");
          afficher(A,n);
          printf("affichage de la matrice B:");
          afficher(B,n);
          break;
        case3:
         printf(" Additionner de la matrice A et B :");
         additionner(A,B,C,n);
         afficher (C,n);
         break;
        case4:
         printf (" multiplier les deux matrices A et B:");
         multiplier(A,B,C,n);
         afficher (C,n);
         break;
        }
    } while (choix < 5);
        
    return 0;
}
