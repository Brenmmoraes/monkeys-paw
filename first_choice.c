#include <stdio.h>
#include <windows.h>

int get_choice(int max);

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

    printf("\nSo...");
    Sleep(2000); 
    printf(" are you ready?\n");
    Sleep(2000); 

    printf("\033[34m");
    printf("\n\nI choose  ");
    printf("\033[0m");

  

    choice = get_choice(3);

    printf("\033[1;31m");
    Sleep(1000); 
    printf("\n\n------------------------------------------------------------------------------");
    Sleep(1000); 
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    Sleep(1000); 
    printf("------------------------------------------------------------------------------\n\n");
    printf("\033[0m");
    
      
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