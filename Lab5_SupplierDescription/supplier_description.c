#include <stdio.h>
#include <string.h>

int main()
{
    char supplierName[100];
    char town[50];
    char description[200];

    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);

    supplierName[strcspn(supplierName, "\n")] = '\0';

    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);

    town[strcspn(town, "\n")] = '\0';

    strcpy(description, supplierName);
    strcat(description, " operates in ");
    strcat(description, town);
    strcat(description, ".");

    printf("\n--- SUPPLIER DESCRIPTION ---\n");
    printf("%s\n", description);

    return 0;
}