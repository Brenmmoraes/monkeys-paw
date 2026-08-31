#include <stdio.h>
#include <windows.h>
#include "game.h"

void are_u_sure(void)
{
    printf("\033[1;31m");
    Sleep(1000); 
    printf("\n\n------------------------------------------------------------------------------\n");
    Sleep(1000); 
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    Sleep(1000); 
    printf("------------------------------------------------------------------------------\n\n");
    printf("\033[0m");
    
    printf("You wish to \033[91mDESTROY\033[0m the paw?\n\n");
    printf("Are you absolutely sure?\n");
    printf("Yes or no?\n");

    char answer = get_yes_no();
    int choice = 0;

    if (answer == 'y' || answer == 'Y')
    {
        destroy_paw();
    }
    else if (answer == 'n' || answer == 'N')
    {
        printf("You want to keep the paw instead?\n");
        printf("1. No. This thing belongs in the fireplace.\n");
        printf("2. Yes. I guess it's better to have it and not need it, right? \n");

        choice = get_choice(2);

        if (choice == 1)
        {
            destroy_paw();
        }
        else 
        {
            kept_paw();
        }
    }
}