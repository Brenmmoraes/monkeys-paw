#include <stdio.h>
#include <windows.h>

char get_choice_y_n(void);
int get_choice(int max);

void destroy_paw(void);
void keep_paw(void);

void are_u_sure(void)
{
    printf("You wish to DESTROY the paw?\n");
    printf("Are you absolutely sure?\n");
    printf("Yes or no?\n");

    char answer = get_choice_y_n();
    int choice = 0;

    if (answer == 'y')
    {
        destroy_paw();
    }
    else if (answer == 'n')
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
            keep_paw();
        }
    }
}