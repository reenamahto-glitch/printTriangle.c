p6
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the limit (n): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {   
            sum += i;       
        }
    }
    printf("Sum of even numbers from 1 to %d = %d\n", n, sum);

    return 0;

}
//  REENA MAHTO
// ERP-11151
// Enter the limit (n): 4
// Sum of even numbers from 1 to 4 = 6