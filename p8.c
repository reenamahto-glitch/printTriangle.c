p8
#include <stdio.h>
int sumOfDigits(int n) {
int sum = 0;
while (n > 0) {
   sum += n % 10;
    n = n/10;

}
return sum;
}
int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);
printf("Sum of digits of %d %d\n", n, sumofDigits(n));
return 0;
}
//  REENA MAHTO
//ERP 11151
// Enter a numbre:6
// sum of digits of 6 = 6

