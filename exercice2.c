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
void multiplier(int A[][10], int B[][10]int C[][10],int n ){
    for (int i=0; i<n;i++)
     for (int j = 0; j < n; j++)
        C[i][j] = A[i][j] * B[i][j];
}
void menu (){
    printf("selectioner votre choix :");
    


}

