#include <stdio.h>
/*
Unit conversion-
km to miles
cm to inch
pound to kg
inches to meters
inches to foot
*/
int main()
{
    int num;
    printf("Please enter the corrosponding number of any of the following unit conversion:\n1. km to miles\n2. cm to inches\n3. pound to kg\n4. inches to meters\n5. inches to foot\n");
    printf("Enter the number = ");
    scanf("%d", &num);
    if (num == 1)
    {
        float inp;
        printf("\nKm= ");
        scanf("%f", &inp);
        printf("\n%f Km to miles is %f", inp, inp * 0.621371);
    }
    else if (num == 2)
    {
        float inp;
        printf("\ncm= ");
        scanf("%f", &inp);
        printf("\n%f cm to inch is %f", inp, inp * 0.393701);
    }
    else if (num == 3)
    {
        float inp;
        printf("\nPound= ");
        scanf("%f", &inp);
        printf("\n%f Pound to kg is %f", inp, inp * 0.453592);
    }
    else if (num == 4)
    {
        float inp;
        printf("\nInches= ");
        scanf("%f", &inp);
        printf("\n%f inches to meter is %f", inp, inp * 0.0254);
    }
    else if (num == 5)
    {
        float inp;
        printf("\nInches= ");
        scanf("%f", &inp);
        printf("\n%f Inches to foot is %f", inp, inp * 0.0833333);
    }
    else
    {
        printf("\nYou entered the wrong number :/");
    }
    return 0;
}
