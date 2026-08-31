#include <stdio.h>
#include <windows.h>
#include "game.h"

void sorry()
{
    printf("\n\nOh no...\n I'm terribly sorry...\n");
    Sleep(2000);

    printf("That wasn't supposed to be there...\n\n");
    Sleep(2000);

    printf("\033[91mIt's FINDERS, KEEPERS...\033[0m\n\n");
    Sleep(3000);

    printf("Let me do this again, please...\n");
    Sleep(3000);

    printf("Here you go.\n\n");
    Sleep(3000);

    printf("1. Make the first wish\n");
    Sleep(2000);

    printf("2. Make the first wish\n");
    Sleep(2000);

    printf("\nThis is it. I guess this is an easier one, right?\n");
    Sleep(1000);

    printf("Maybe you'll be able to choose it faster.\n");
    Sleep(2000);

    printf("Go on...\n\n");
    Sleep(2000);

    int choice = get_choice(2);

    if (choice == 1 || choice == 2)
    {
        first_wish();
    }
}