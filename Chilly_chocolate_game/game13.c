#include<stdio.h>
int main()
{
    int choco = 13, option, turn = 1, available = 3;
    printf("\n----------------Chilly chocolate Game -------------------\n\n");
    printf("Total number of chocolates : 13\n");
    while(choco > 0)
    {
        if(turn == 1)
        {
            printf("\nPlayer 1's turn\n");
            if(choco < 3)
                available = choco;
            printf("Enter a option between 1 and %i : ", available);
            scanf("%i", &option);
            if(option < 1 && option > available)
            {
                printf("Enter a valid option\n");
                continue;

            }  
            choco -= option;
            turn ++;
            continue;
        }
        if(turn == 2)
        {
          printf("\nPlayer 2's turn\n");
            if(choco < 3)
                available = choco;
            printf("Enter a option between 1 and %i : ", available);
            scanf("%i", &option);
            if(option < 1 && option > available)
            {
                printf("Enter a valid option\n");
               continue;
            }
                
            choco -= option;
            turn --;  
        }
    }
    printf("\n\nPlayer %i loses and gets the chilly !\n\n", turn);
}