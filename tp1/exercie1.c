#include <stdio.h>
void exchange(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x, y;
    printf("Donner deux valeurs : ");
    scanf("%d %d", &x, &y);
    printf("Avant l echange : x = %d, y = %d\n", x, y);
    exchange(&x, &y); 
    printf("Apres l echange : x = %d, y = %d\n", x, y);
}
