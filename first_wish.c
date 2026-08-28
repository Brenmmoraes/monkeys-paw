#include <stdio.h>
#include <windows.h>

void first_wish()
{
    printf("You chose to MAKE A WISH?\n");
    Sleep(2000);
    printf("Then so it shall be..\n");
    Sleep(2000);
    printf("Go on...");
    Sleep(3000);
    printf( "make your wish...");
    Sleep(3000);
    printf( " your first wish\n\n");
    Sleep(3000);

    printf("1. Money\n");
    Sleep(2000);
    printf("2. knowledge\n");
    Sleep(2000);
    printf("3. Love\n\n");
    Sleep(2000);

    Sleep(3000);
    
    int wish;
    printf("I wish ... %d", &wish);

}