#include <stdio.h>
#include <stdlib.h>

int main()
{   float FareCost,Paid,Remainder;
    int NumberOfPeople;
    printf("\t\tWelcome to Micro Bus Fare Calculator \n");
    printf("\n\t\tEnter -1 in the Paid Field to Exit the Program...\n");
    printf("============================================\n");
    printf("Please Enter The Fare Cost : ");
    scanf("%f",&FareCost);
    while(1)
    {
        printf("\nPlease enter The Money Paid : ");
        scanf("%f",&Paid);
        if(Paid == -1)
        {
            break;
        }
        printf("Please enter The Number Of People : ");
        scanf("%d",&NumberOfPeople);
        if(NumberOfPeople <1 || Paid<FareCost)
        {
            printf("Error...Please Enter The Data Correctly..\n");
            continue;
        }
        Remainder = Paid-(NumberOfPeople*FareCost);
        printf("The Remainder Of The Money is %.2f \n", Remainder );
        printf("===============\n");
    }
    printf("Thank you For using our program <3 ");


    return 0;
}
