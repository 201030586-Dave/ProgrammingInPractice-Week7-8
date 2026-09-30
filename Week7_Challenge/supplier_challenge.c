#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][100];
    char emails[5][100];
    char phones[5][30];
    char towns[5][50];

    char searchName[100];

    int i;
    int found = 0;

    printf("=== SUPPLIER MANAGEMENT ===\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details for supplier %d\n", i + 1);

        printf("Name: ");
        fgets(names[i], 100, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';

        printf("Email: ");
        fgets(emails[i], 100, stdin);
        emails[i][strcspn(emails[i], "\n")] = '\0';

        printf("Phone: ");
        fgets(phones[i], 30, stdin);
        phones[i][strcspn(phones[i], "\n")] = '\0';

        printf("Town: ");
        fgets(towns[i], 50, stdin);
        towns[i][strcspn(towns[i], "\n")] = '\0';
    }

    printf("\nEnter supplier name to search: ");
    fgets(searchName, 100, stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    for (i = 0; i < 5; i++)
    {
        if (strcmp(searchName, names[i]) == 0)
        {
            printf("\nSupplier found!\n");
            printf("Name: %s\n", names[i]);
            printf("Email: %s\n", emails[i]);
            printf("Phone: %s\n", phones[i]);
            printf("Town: %s\n", towns[i]);

            found = 1;
        }
    }

    if (found == 0)
    {
        printf("\nSupplier not found.\n");
    }

    return 0;
}