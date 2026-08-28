#include <stdio.h>
#include <windows.h>

void are_u_sure()
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