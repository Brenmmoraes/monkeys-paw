#include <stdio.h>
#include <windows.h>

int get_choice(int max);
void make_wish();

void sorry()
{
    printf("\n\nOh no... I'm terribly sorry...");
    Sleep(2000);

    printf("That wasn't supposed to be there...\n");
    Sleep(2000);

    printf("It's FINDERS, KEEPERS...");
    Sleep(3000);

    printf("Let me do this again, please...");
    Sleep(3000);

    printf("Here you go.\n\n");
    Sleep(3000);

    printf("1. Make the first wish\n");
    Sleep(2000);

    printf("2. Make the first wish\n");
    Sleep(2000);

    printf("\nThis is it. I guess this is an easier one, right?");
    Sleep(1000);

    printf(" Maybe you'll be able to choose it faster.\n");
    Sleep(2000);

    printf("Go on...\n");
    Sleep(2000);

    int choice = get_choice(2);

    if (choice == 1 || choice == 2)
    {
        make_wish();
    }
}