#include <stdio.h>
#include <windows.h>

void first_choice();
void first_wish();
void destroy_paw();


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

    printf("\033[31m");
    printf("\nYou find an old wooden box hidden beneath the floorboards.\n\n");
    Sleep(4000);

    printf("Inside, wrapped in a piece of rotten cloth, there is a dried monkey's paw.\n\n");
    Sleep(4000);

    printf("It looks ancient.\n\n");
    Sleep(4000);

    printf("As you touch it, you notice three strange marks carved into the wood:\n\n");
    Sleep(4000);

    printf("1  ");
    Sleep(2000);

    printf("2  ");
    Sleep(2000);

    printf("3\n\n");
    Sleep(2000);

    printf("A small piece of paper lies underneath the paw.\n\n");
    Sleep(4000);

    printf("\nThree wishes. Three prices.\n");
    Sleep(4000);

    printf("\nHOLD THE PAW AND SPEAK YOUR WISH ALOUD.\n");
    Sleep(3000);

    printf("\nEVERY WISH HAS A PRICE.\n");
    Sleep(3000);

    printf("\nA WISH CANNOT BE UNDONE.\n");
    Sleep(3000);

    printf("\nTHE PAW CAN ONLY BE DESTROYED BY FIRE..\n\n");
    Sleep(3000);

    printf("\nYou look at the fireplace.\n");
    Sleep(3000);

    printf("Then at the paw.\n\n");
    printf("\033[0m");
    first_choice();

    Sleep(2000);

    return 0;
}

void first_choice()
{
    int choice;
    printf("What do you do?\n\n");
    printf("1. Make a first wish.\n");
    printf("2. Keep the paw.\n");
    printf("3. Burn the paw.\n\n");

    printf("This is your first choice. Choose wisely.\n");
    Sleep(2000);
    printf("Once you choose, there is no going back.\n");

    Sleep(2000);

    printf("\nSo... are you ready?\n");
    printf("Choose: ");

    scanf("%d", &choice);

    if (choice == 1)
    {
        first_wish();
    }

    else if (choice == 2)
    {
        printf("You chose to KEEP the paw?\n");
        Sleep(2000);
        printf("Haven't you heard?\n");
        Sleep(1000);
        printf("Some things...");
        Sleep(1000);
        printf(" are just... ");
        Sleep(1000);
        printf(" not meant to be kept...\n");
        Sleep(1000);
        printf("Most people would have burned it.\n");
        Sleep(1000);
        printf("Well...");
        Sleep(2000);
        printf(" you've made your choice.\n");

    }

    else
    {

        printf("You wish to DESTROY the paw?\n");
        printf("Are sure of this?\n");
        char answer;
        getchar();
        scanf("%c", &answer);

        if (answer == 'y')
        {
            destroy_paw();
        }
        else
        {
            printf("gave_up_destroing_paw");
        }
    }
}