#include <stdio.h>
#include <string.h>

int main()
{
    char supplier1[] = "ABC Office Supplies";
    char supplier2[] = "Namibia Stationery";
    char searchName[100];

    printf("Enter supplier name to search: ");
    fgets(searchName, sizeof(searchName), stdin);

    searchName[strcspn(searchName, "\n")] = '\0';

    if (strcmp(searchName, supplier1) == 0)
    {
        printf("Supplier found: %s\n", supplier1);
    }
    else if (strcmp(searchName, supplier2) == 0)
    {
        printf("Supplier found: %s\n", supplier2);
    }
    else
    {
        printf("Supplier not found.\n");
    }

    return 0;
}