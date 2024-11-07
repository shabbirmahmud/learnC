#include<stdio.h>
int main()
{
    int a=7;
    int *ptra=&a;
    int *ptr2=NULL;
    printf("%p\n",ptra);
    printf("%x\n",ptra);
    printf("%x\n",&a);
    printf("%d\n",*ptra);
    printf("%d\n",a);
    printf("%p\n",ptr2);
    return 0;
}
