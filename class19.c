#include<stdio.h>
int sum (int a,int b)
{
    a=5;b=4;
    return a+b;
}
void printstar(int m)
{   
    for ( int i = 0; i < m; i++)
    {
        printf("%c",'*');
    }
    
}
int takenumber()
{
    int k;
    printf("Please enter a number = ");
    scanf("%d",&k);
    return k;
}
void lol()
{
    int l=10;
    for (int j = 0; j < l; j++)
    {
        printf ("%c",'%');
    }
    
}
int main()
{
    int a,b,c=sum(a,b),d=takenumber();
    printf("The sum is = %d\n",c);
    printstar(10);
    printf("\nThe entered number is %d\n",d);
    lol();
    return 0;
}



