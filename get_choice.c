#include <stdio.h>
#include <windows.h>
#include "game.h"

int get_choice(int max)
{
    int choice;

    if (scanf("%d", &choice) != 1 || choice < 1 || choice > max)
    {
        while (getchar() != '\n');

        Sleep(3000);
        printf("\n\n...\n");
        Sleep(3000);
        printf("You only have %d options.\n", max);
        Sleep(2000);
        printf("Please, don't embarrass yourself...");
        Sleep(2000);
        printf(" choose accordingly.\n");
        Sleep(2000);
        printf("Let's try again...\n\n");
        Sleep(2000);

        return get_choice(max);
    }

    return choice;
}