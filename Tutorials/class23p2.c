#include<stdio.h>
int main()
{
int marks[2][5]={{45,34,55,24,43},{43,434,43,43,433}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("The %d%d element of the array is %d\n",i,j,marks[i][j]);
        }
        
    }
    
    return 0;
}
