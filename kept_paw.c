#include <stdio.h>
#include <windows.h>

int get_choice(int max);
void sorry();
void first_wish();

void kept_paw()
{
    Sleep(3000);

    printf("\033[31m");
    printf("\n\nYou chose to ");
    Sleep(2000);

    printf("\033[1;31m");
    printf("KEEP");
    Sleep(2000);

    printf("\033[31m");
    printf(" the paw?!\n\n");

    printf("\033[0m");
    Sleep(2000);

    printf("Haven't you heard?\n\n");
    Sleep(1000);

    printf("Some things...");
    Sleep(1000);

    printf(" are just... ");
    Sleep(1000);

    printf(" not meant to be ");
    Sleep(1000);

    printf("\033[1;31m");
    printf("kept.\n\n");

    printf("\033[0m");
    Sleep(1000);

    printf("Most people would have burned it.\n");
    Sleep(1000);

    printf("Well...");
    Sleep(2000);

    printf(" you've made your choice.\n");

    Sleep(4000);

    
    // CHAPTER TWO

    printf("\033[1;31m");
    Sleep(1000); 
    printf("\n\n------------------------------------------------------------------------------");
    Sleep(1000); 
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    Sleep(1000); 
    printf("------------------------------------------------------------------------------\n\n");
    printf("\033[0m");

    printf("\033[33m");
    printf("\n");
    printf("          CHAPTER TWO: FINDERS, KEEPERS\n");
    printf("\n");
    printf("\033[0m");

    Sleep(3000);


    // THE PAW

    printf("You stare at the paw.\n");
    Sleep(1000);

    printf("It hasn't moved.");
    Sleep(1000);

    printf("That's good.");
    Sleep(1000);

    printf("Probably\n");
    Sleep(1000);

    printf("You pick it up.\n");
    Sleep(1000);

    printf("It's surprisingly...");
    Sleep(1000);

    printf(" warm.\n");
    Sleep(1000);

    printf("...\n");
    Sleep(1000);

    printf("You weren't expecting that.\n");


    // THUD

    printf("You drop it.\n");
    Sleep(1000);

    printf("\nTHUD.\n");
    Sleep(1000);

    printf("\nNothing happens.\n");
    Sleep(1000);

    printf("\nYou stare at it for a few seconds.\n");
    Sleep(1000);

    printf("\nThen you laugh.\n");
    Sleep(1000);

    printf("\n\"Okay. It's just a stupid monkey paw.\"\n");
    Sleep(1000);

    printf("\nYou pick it up again.\n");
    Sleep(1000);


    // THE WRITING

    printf("\nThis time, you notice something.\n");
    Sleep(1000);

    printf("\nThere's writing on the palm.\n");
    Sleep(1000);

    printf("\nThree words.\n");
    Sleep(1000);

    printf("\nMAKE YOUR WISH.\n");
    Sleep(1000);

    printf("\nYou turn the paw over.\n");
    Sleep(1000);

    printf("\nThere's nothing on the other side.\n");
    Sleep(1000);

    printf("\nYou look back at the palm.\n");
    Sleep(1000);

    printf("\nThe writing is gone.\n");
    Sleep(1000);

    printf("\n...\n");
    Sleep(1000);


    // CHOICE

    printf("\nWhat do you do?\n");
    Sleep(1000);

    printf("\n1. Make a wish.\n");
    Sleep(1000);

    printf("\n3. Throw it in the fireplace.\n");
    Sleep(1000);

    printf("Go on... choose it already..\n");
    Sleep(2000);

    printf("\033[34m");
    printf("\n\nI choose  ");
    printf("\033[0m");

    int choice;
    choice = get_choice(2);


    // CHOICE DIVIDER

    printf("\033[1;31m");

    Sleep(1000);
    printf("\n\n------------------------------------------------------------------------------");

    Sleep(1000);
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");

    Sleep(1000);
    printf("------------------------------------------------------------------------------\n\n");

    printf("\033[0m");


    // NEXT BRANCH

    if (choice == 1)
    {
        first_wish();
    }
    else if (choice == 2)
    {
        sorry();
    }
}