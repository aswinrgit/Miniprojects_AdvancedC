#include <stdio.h>

int main()
{
    printf("\n <----------------- Cafe ---------------->\n");
    label:
    int option, coffee = 0, tea = 0, puff = 0, sandwich = 0, total = 0;
    do
    {
    
    printf("\n1. Coffee - Rs.20\n2. Tea - Rs.15\n3. Puff - Rs.25\n4. Sandwich - Rs.40\n5. To finish the order\n");
    printf("Your choice : ");
    scanf("%i",&option);
    switch (option)
    {
        case 1:
        printf("You ordered Coffee\n");
        total += 20;
        coffee ++;
        break;
        case 2:
        printf("You ordered Tea\n");
        total += 15;
        tea++;
        break;
        case 3:
        printf("You ordered Puff\n");
        total += 15;
        puff++;
        break;
        case 4:
        printf("You ordered Sandwich\n");
        total += 40;
        sandwich++;
        break;
        case 5: 
        printf("Your order : \n");
        break;
        default:
        printf("Invalid input\n");
    }
 
    }while(option != 5);
    if(coffee > 0)
    {
        printf("%i * Coffee \t\t------------> %i/-\n", coffee, coffee * 20);
    }
    if(tea > 0)
    {
        printf("%i * Tea \t\t------------> %i/-\n", tea, tea * 15);
    }
    if(puff > 0)
    {
        printf("%i * Puff \t\t------------> %i/-\n", puff, puff * 25);
    }
    if(sandwich > 0)
    {
        printf("%i * Sandwich \t\t------------> %i/-\n", sandwich, sandwich * 40);
    }
    printf("CGST (18%%)\t\t------------> %g/-\n", total * 18.0 / 100);
    total += total * 18 / 100;
    printf("\nYour Total \t\t------------> %i/-\n", total);
    int revise = 0;
    printf("\nIf you want to check out, press 1; If you want to revise your order, press 2 : ");
    scanf("%i", &revise);
    if(revise == 2)
        goto label;
    printf("\n\n--------------Thank you, hope we'll see you soon----------------\n\n");
      return 0;
}