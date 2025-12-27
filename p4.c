p4
#include <string.h>
int main() {

    char stored_pin[] = "1234";   
    char entered_pin[10];         
    printf("=== ATM PIN Authentication ===\n");
    printf("Enter your PIN: ");
    scanf("%s", entered_pin);

    if (strcmp(stored_pin, entered_pin) == 0) {
        printf("Access granted.\n");
    } else {
        printf("Access denied.\n");
    }
    return 0;
}
//     REENA MAHTO
//     ERP- 11151
//     === ATM PIN Authentication ===
// Enter your PIN: 1244
// Access denied.