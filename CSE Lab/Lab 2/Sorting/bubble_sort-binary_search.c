#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printArray(int arr[],int n)
{
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}

int searchBinary(int a[], int n, int num)
{
    int left = 0;
    int right = n;
    while(left<=right)
    {
        int mid = left+(right-left)/2;

        if(a[mid] == num)
            return mid;
        
        if(a[mid]<num)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    srand(time(0));
    int n=10;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100+1;
    }
    printArray(arr,n);
    bubble_sort(arr,n);
    printArray(arr,n);
    
    int number;
    printf("\nEnter number: ");
    scanf("%d",&number);
    int index = searchBinary(arr,n,number);
    if(index==-1)
        printf("Number not found\n");
    else
        printf("Number found at index: %d\n",index);

    return 0;
}