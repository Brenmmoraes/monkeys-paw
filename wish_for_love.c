#include <stdio.h>
#include <windows.h>

int get_choice(int max);
void break_up();
void second_wish();

void wish_for_love(void)
{

printf("\033[1;95m");
Sleep(1000); 
printf("\n\n------------------------------------------------------------------------------\n");
Sleep(1000); 
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
Sleep(1000); 
printf("------------------------------------------------------------------------------\n\n");
printf("\033[0m");

printf("\033[33m");
printf("\n");
printf("          CHAPTER TWO: TOO MUCH OF A GOOD THING\n");
printf("\n");
printf("\033[0m");

printf("\nYou wished for \033[1;95mLOVE\033[0m.\n\n");

printf("\nYou think about it for a moment.\n");
Sleep(2000);

printf("You don't want just anyone.\n");
Sleep(1500);

printf("A woman you never get tired of looking at.\n");
Sleep(1500);

printf("Someone who truly loves you.\n");
Sleep(1500);

printf("Someone who chooses you.\n");
Sleep(2000);

printf("\nYou look down at the paw.\n");
Sleep(1500);

printf("\n\"I wish for a woman I never get tired of looking at...");
Sleep(1500);

printf(" someone who truly loves me.\"\n");
Sleep(3000);

printf("\n...\n");
Sleep(2000);

printf("Nothing happens.\n");
Sleep(2000);

printf("You wait.\n");
Sleep(2000);

printf("Still nothing.\n");
Sleep(2000);

printf("You sigh.\n");
Sleep(1500);

printf("Maybe this was all just nonsense after all.\n");
Sleep(2500);

printf("\nYou put the paw down and reach for your phone.\n");
Sleep(2000);

printf("\nYou have a new message.\n");
Sleep(2000);

printf("\"Hey. I was thinking about you today.\"\n");
Sleep(2500);

printf("\nIt's from her.\n");
Sleep(2000);

printf("You've known her for years.\n");
Sleep(1500);

printf("She's always been there.\n");
Sleep(1500);

printf("You've always gotten along.\n");
Sleep(1500);

printf("You've never really thought of her that way.\n");
Sleep(2500);

printf("\nYou read the message again.\n");
Sleep(2000);

printf("Then another message appears.\n");
Sleep(2000);

printf("\"Are you free tonight?\"\n");
Sleep(2500);

printf("\nYou stare at the screen.\n");
Sleep(2000);

printf("For some reason...\n");
Sleep(1500);

printf("you suddenly wonder why you've never noticed before.\n");
Sleep(3000);

// DAYS PASS

printf("\n\nA few days pass.\n");
Sleep(2000);

printf("\nAnd somehow...\n");
Sleep(1500);

printf("they go by faster than usual.\n");
Sleep(2000);

printf("\nYou spend more time with her.\n");
Sleep(1500);

printf("Talking.\n");
Sleep(1000);

printf("Going out.\n");
Sleep(1000);

printf("Laughing.\n");
Sleep(1500);

printf("She seems to be \033[1;95meverywhere\033[0m.\n");
Sleep(2000);

printf("\nAt first, you like it.\n");
Sleep(2000);

printf("She messages you in the morning.\n");
Sleep(1500);

printf("She wants to know how you slept.\n");
Sleep(1500);

printf("She asks what you're doing.\n");
Sleep(1000);

printf("Who you're with.\n");
Sleep(1000);

printf("When you'll be home.\n");
Sleep(2000);

printf("\nAt first...\n");
Sleep(1500);

printf("it's cute.\n");
Sleep(2000);

printf("\nBut then it becomes constant.\n");
Sleep(2000);

printf("You don't answer for an hour.\n");
Sleep(1000);

printf("She asks if something is wrong.\n");
Sleep(1500);

printf("You go out with a friend.\n");
Sleep(1000);

printf("She asks why you didn't invite her.\n");
Sleep(1500);

printf("You tell her you need some time alone.\n");
Sleep(1000);

printf("She asks if she's done something wrong.\n");
Sleep(1500);

printf("You say no.\n");
Sleep(1000);

printf("She asks again.\n");
Sleep(1000);

printf("And again.\n");
Sleep(2000);

printf("\nShe wants to know where you are.\n");
Sleep(1000);

printf("What you're doing.\n");
Sleep(1000);

printf("Who you're talking to.\n");
Sleep(1000);

printf("If you're thinking about her.\n");
Sleep(2000);

printf("\nSometimes you just want her to stop talking.\n");
Sleep(2000);

printf("You start making excuses.\n");
Sleep(1500);

printf("You start avoiding her messages.\n");
Sleep(1500);

printf("And somehow...\n");
Sleep(1500);

printf("that only makes it worse.\n");
Sleep(2000);

printf("\nShe wants to see you more.\n");
Sleep(1000);

printf("She wants to know you more.\n");
Sleep(1000);

printf("She wants to be part of everything.\n");
Sleep(1500);

printf("Every ");
Sleep(1000);
printf("little");
Sleep(1000);
printf(" thing.");
Sleep(2000);
printf(" \n");
Sleep(2000);

printf("\nYou start getting irritated when you see her name on your phone.\n");
Sleep(2000);

printf("Then annoyed when she calls.\n");
Sleep(1500);

printf("Then relieved when she leaves.\n");
Sleep(2500);

printf("\nAnd that realization... ");
Sleep(1500);

printf("doesn't feel very good.\n");
Sleep(2500);

printf("\nBut you don't love her.\n");
Sleep(2000);

printf("At this point...");
Sleep(1500);

printf(" do you even...");
Sleep(1500);

printf("\033[1;95mlike\033[0m ");
Sleep(1500);
printf("her?\n");
Sleep(2500);
printf("\nYou remember the paw.\n\n");
Sleep(2000);


printf("Can you fix this?\n");
Sleep(2500);

printf("\nMaybe... ");
Sleep(1500);

printf("with another wish?\n");
Sleep(2000);

printf("\nYou still have two left.\n\n");
Sleep(3000);

printf("Do you want to make a wish?\n\n");
Sleep(3000);

printf("I mean... ");
Sleep(2000);

printf("You could just... ");
Sleep(2000);

printf("break up.\n\n");
Sleep(3000);

printf("1. Make a wish\n");
Sleep(3000);

printf("2. Break up \n\n");
Sleep(3000);


int choice;
    do
    {
        choice = get_choice(2);

        if (choice != 2)
        {
            Sleep(2000);
            printf("\nSorry, this path is not complete yet.\n");
            printf("For now, you can only break up.\n\n");
        }

    } while (choice != 2);

    break_up();

}