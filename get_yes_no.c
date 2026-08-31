#include <stdio.h>
#include <windows.h>

char get_yes_no(void)
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