#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedtemp;
    printf("Temperature conversion menu \n");
    printf("1. fahrenhit to celcious\n");
    printf("2. celcious to fahrenhit  \n");
    printf("enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
    {
        printf("Enter fharenhite temperature \n");
        scanf("%f",&temp);
        convertedtemp = 5*(temp-32)/9;
        printf("celcious temperature = %f \n",convertedtemp );


        break;
    }



    case 2:
    {
        printf("Enter celcious temperature \n");
        scanf("%f",&temp);
        convertedtemp = (temp/5)*9+32;
        printf("farenhite temperature = %f \n",convertedtemp );

        break;
    }
    default:
        printf("Enter right value \n");
    }


getch();
}



