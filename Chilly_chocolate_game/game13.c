/*
Chilly chocolate game with 13 chocolates and a choice to select from 1 to 3
Name : Aswin Raja.R
Date : 31.10.26
*/
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
            if(choco < 3) // Checking if the remanining chocolates are less than 3 and updating available on the same
                available = choco;
            printf("Enter a option between 1 and %i : ", available);
            scanf("%i", &option);
            if(option < 1 || option > available)
            {
                printf("Enter a valid option\n");
                continue;

            }  
            choco -= option;
            turn ++;
            continue; // To skip turn 2 in case of the winning choice
        }
        if(turn == 2)
        {
          printf("\nPlayer 2's turn\n");
            if(choco < 3)
                available = choco;
            printf("Enter a option between 1 and %i : ", available);
            scanf("%i", &option);
            if(option < 1 || option > available)
            {
                printf("Enter a valid option\n");
               continue;
            }
                
            choco -= option;
            turn --;  
        }
    }
    printf("\n\nPlayer %i loses and gets the chilly !\n\n", turn); // Printing the winner based on the turn the loop was exited
}
