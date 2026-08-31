#include <stdio.h>
#include <windows.h>
#include "game.h"


int main(void)
{
    
    printf("\033[31m");
    printf("=================================\n");
    printf("        THE MONKEY'S PAW\n");
    printf("=================================\n");
    printf("\033[0m");

    Sleep(3000);

    printf("\033[33m");
    printf("\n");
    printf("          CHAPTER ONE\n");
    printf("\n");
    printf("\033[0m");
    Sleep(3000);

    
    printf("\nYou find an old wooden box hidden beneath the floorboards.\n\n");
    Sleep(4000);

    printf("Inside, wrapped in a piece of rotten cloth, there is a dried monkey's paw.\n\n");
    Sleep(4000);

    printf("It looks...");
    Sleep(2000);
    printf(" ancient...\n\n");
    Sleep(2000);

    printf("As you touch it, you notice three marks carved into the wood:\n\n");
    Sleep(4000);

    printf("1  ");
    Sleep(1000);

    printf("2  ");
    Sleep(1000);

    printf("3\n\n");
    Sleep(1000);

    printf("A small piece of paper lies underneath the paw.\n\n");
    Sleep(4000);

    printf("\033[31m");
    printf("\nTHREE WISHES. THREE PRICES.\n");
    Sleep(4000);

    printf("\nHOLD THE PAW AND SPEAK YOUR WISH ALOUD.\n");
    Sleep(3000);

    printf("\nEVERY WISH HAS A PRICE.\n");
    Sleep(3000);

    printf("\nA WISH CANNOT BE UNDONE.\n");
    Sleep(3000);

    printf("\nTHE PAW CAN ONLY BE DESTROYED BY FIRE.\n\n");
    Sleep(3000);
    printf("\033[0m");

    printf("\nYou look at the fireplace.\n");
    Sleep(3000);

    printf("Then at the paw.\n\n");
    Sleep(3000);
    first_choice();
    return 0;
}