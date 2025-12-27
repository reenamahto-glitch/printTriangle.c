p5
#include <stdio.h>
int main (){

    int a, b, i;

    printf("Enter starting number (A): ");
    scanf("%d", &a);

    printf("Enter ending number (B): ");
    scanf("%d", &b);

    printf("Numbers from %d to %d:\n", a, b);
    for (i = a; i <= b; i++) {
        printf("%d\n", i);
    }
    return 0;
}
//      REENA MAHTO
//     ERP-11151  
//     Enter starting number (A): 3
// Enter ending number (B): 8
// Numbers from 3 to 8:
// 3
// 4
// 5
// 6
// 7
// 8