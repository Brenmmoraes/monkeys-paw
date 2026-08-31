#include <stdio.h>
#include <windows.h>
#include "game.h"

void first_choice()
{
    int choice;
    Sleep(2000);
    printf("What do you do?\n\n");
    Sleep(2000);
    printf("1. Make a first wish.\n");
    Sleep(2000);    
    printf("2. Keep the paw.\n");
    Sleep(2000); 
    printf("3. Burn the paw.\n\n");
    Sleep(2000); 

    printf("This is your first choice. Choose wisely.\n");
    Sleep(2000);

    choice = get_choice(3);


    
      
    if (choice == 1)
    {
        first_wish();
    }

    else if (choice == 2)
    {
        kept_paw();
    }

    else if (choice == 3)
    {
        are_u_sure();
    }
}