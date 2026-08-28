#include <stdio.h>
#include <windows.h>

void first_choice()
{
    int choice;
    printf("What do you do?\n\n");
    printf("1. Make a first wish.\n");
    printf("2. Keep the paw.\n");
    printf("3. Burn the paw.\n\n");

    printf("This is your first choice. Choose wisely.\n");
    Sleep(2000);
    printf("Once you choose, there is no going back.\n");

    Sleep(2000);

    printf("\nSo... are you ready?\n");
    printf("Choose: ");

    scanf("%d", &choice);

    if (choice == 1)
    {
        first_wish();
    }

    else if (choice == 2)
    {
        kept_paw();
    }

    else
    {
        are_u_sure();
    }
}