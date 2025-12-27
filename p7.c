p7
#include <stdio.h>

void swap(int *x, int *y) {

int temp;

temp = *x;

*x = y;

*y = temp;

}

int main() {

int a, b;

printf("Enter two numbers:\n");

scanf("%d %d", &a, &b);

printf("Before swapping: a=%d, b = %d\n", a, b);

swap(&a, &b);

printf("After swapping: a = %d, b = %d\n", a, b);

return 0;
}
//REENA MAHTO 
//ERP 11151
// Enter two numbers:
//52
//54
//Before swapping:a = 52, b = 54
//After swapping: a = 54, b = 52