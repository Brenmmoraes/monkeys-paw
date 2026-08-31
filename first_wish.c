#include <stdio.h>
#include <windows.h>

void wish_for_love();
int get_choice(int max);

void first_wish()
{
    printf("\033[1;31m");
    Sleep(1000); 
    printf("\n\n------------------------------------------------------------------------------\n");
    Sleep(1000); 
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    Sleep(1000); 
    printf("------------------------------------------------------------------------------\n\n");
    printf("\033[0m");

    printf("\033[33m");
    printf("\n");
    printf("          CHAPTER TWO: FIRST WISH\n");
    printf("\n");
    printf("\033[0m");
    
    printf("You chose to MAKE A WISH?\n\n");
    Sleep(2000);
    printf("Then so it shall be..\n");
    Sleep(2000);
    printf("Go on...");
    Sleep(3000);
    printf( "make your wish...");
    Sleep(3000);
    printf( " your first wish...\n\n");
    Sleep(3000);

    printf("1. Money.\n");
    printf("2. Power.\n");
    printf("3. Love.\n\n");

     
    int choice;

    do
    {
        choice = get_choice(3);

        if (choice != 3)
        {
            Sleep(2000);
            printf("\nSorry, this path is not complete yet.\n");
            printf("For now, you can only wish for love.\n\n");
        }

    } while (choice != 3);

    wish_for_love();
}