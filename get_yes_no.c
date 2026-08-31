#include <stdio.h>
#include <windows.h>
#include "game.h"

char get_yes_no()
{
    char answer;

    scanf(" %c", &answer);

    if (answer != 'y' && answer != 'Y' &&
        answer != 'n' && answer != 'N')
    {
        while (getchar() != '\n');

        Sleep(2000);
        printf("\nThat's not an option.\n");
        Sleep(2000);
        printf("Please choose Y or N: ");

        return get_yes_no();
    }

    return answer;
}