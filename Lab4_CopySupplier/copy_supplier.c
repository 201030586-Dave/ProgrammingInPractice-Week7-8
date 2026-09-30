#include <stdio.h>
#include <string.h>

int main()
{
    char supplierName[100];
    char backupName[100];

    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);

    supplierName[strcspn(supplierName, "\n")] = '\0';

    strcpy(backupName, supplierName);

    printf("\n--- SUPPLIER INFORMATION ---\n");
    printf("Original Name: %s\n", supplierName);
    printf("Backup Name  : %s\n", backupName);

    return 0;
}