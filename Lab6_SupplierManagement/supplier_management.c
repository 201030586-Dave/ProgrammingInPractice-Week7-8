#include <stdio.h>
#include <string.h>

int main()
{
    char supplierName[100];
    char email[100];
    char phone[30];
    char town[50];
    char searchName[100];

    int choice;

    do
    {
        printf("\n");
        printf("================================\n");
        printf(" MUNICIPAL FINANCIAL MANAGEMENT\n");
        printf("================================\n");
        printf("1. Add Supplier\n");
        printf("2. Display Supplier\n");
        printf("3. Search Supplier\n");
        printf("4. Show Name Length\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1)
        {
            printf("\nEnter supplier name: ");
            fgets(supplierName, 100, stdin);
            supplierName[strcspn(supplierName, "\n")] = '\0';

            printf("Enter email: ");
            fgets(email, 100, stdin);
            email[strcspn(email, "\n")] = '\0';

            printf("Enter phone: ");
            fgets(phone, 30, stdin);
            phone[strcspn(phone, "\n")] = '\0';

            printf("Enter town: ");
            fgets(town, 50, stdin);
            town[strcspn(town, "\n")] = '\0';

            printf("\nSupplier added.\n");
        }
        else if (choice == 2)
        {
            printf("\n--- SUPPLIER DETAILS ---\n");
            printf("Name: %s\n", supplierName);
            printf("Email: %s\n", email);
            printf("Phone: %s\n", phone);
            printf("Town: %s\n", town);
        }
        else if (choice == 3)
        {
            printf("\nEnter supplier name to search: ");
            fgets(searchName, 100, stdin);
            searchName[strcspn(searchName, "\n")] = '\0';

            if (strcmp(searchName, supplierName) == 0)
            {
                printf("Supplier found.\n");
            }
            else
            {
                printf("Supplier not found.\n");
            }
        }
        else if (choice == 4)
        {
            printf("\nSupplier name length: %zu\n", strlen(supplierName));
        }
        else if (choice == 5)
        {
            printf("\nGoodbye.\n");
        }
        else
        {
            printf("\nInvalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}