 #include <stdio.h>

int main() {

    
    long int number;          
    long int originalNumber;  
    long int reversedNumber;  
    int digit;                

  
    reversedNumber = 0;

    printf("Enter a number: ");
    scanf("%ld", &number);

    
    originalNumber = number;

    while (number != 0) {

        
        digit = number % 10;

        
        reversedNumber = (reversedNumber * 10) + digit;


        
        number = number / 10;
    }

    
    printf("\nOriginal Number : %ld", originalNumber);
    printf("\nReversed Number : %ld\n", reversedNumber);

    
    if (originalNumber == reversedNumber) {
        printf("\nResult: Palindrome\n");
    } else {
        printf("\nResult: Not Palindrome\n");
    }

    return 0;
}
// Enter a number: 12321

// Original Number : 12321
// Reversed Number : 12321

// Result: PalindromeEnter a number: 12345

// Original Number : 12345
// Reversed Number : 54321

// Result: Not Palindrome
