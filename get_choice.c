#include <stdio.h>
#include <windows.h>


int get_choice(void)
{
    int choice;

    if (scanf("%d", &choice) != 1 || choice < 1 || choice > 3)
    {
        while (getchar() != '\n');

        Sleep(3000);
        printf("\n\n...\n");
        Sleep(3000);
        printf("You only have three options.\n");
        Sleep(2000);
        printf("Please, don't embarrass yourself...");
        Sleep(2000);
        printf(" choose accordingly.\n");
        Sleep(2000);
        printf("Let's try again...\n\n");
        Sleep(2000);
        printf("What do you choose?\n\n");
        Sleep(2000);
        printf("In case you're wondering, I'am not repeating myself, just look up and choose...\n\n");
        Sleep(2000);
        printf("\033[35m");
        printf("\n\nOk, Ok. I choose ");
        printf("\033[0m");

        return get_choice();
    }

    return choice;
}