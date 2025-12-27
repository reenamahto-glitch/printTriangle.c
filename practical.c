
#include <stdio.h>
void printTriangle(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    printTriangle(n);

    return 0;
}
// REENA MAHTO
// ERP- 11151
// Enter the height of the triangle: 5
// *
// **
// ***
// ****
// *****