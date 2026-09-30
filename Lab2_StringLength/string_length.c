#include <stdio.h>
#include <string.h>

int main()
{
    char supplierName[100];
    char email[100];
    char town[50];

    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);

    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);

    printf("\n--- STRING LENGTHS ---\n");
    printf("Supplier name length: %zu\n", strlen(supplierName));
    printf("Email length: %zu\n", strlen(email));
    printf("Town length: %zu\n", strlen(town));

    return 0;
}