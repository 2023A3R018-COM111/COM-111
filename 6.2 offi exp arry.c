#include <stdio.h>
void insertionsort(int array[],int n);
int main()
{
    int n ;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int array[n];
    printf("enter %d element:\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",array[i]);
    }
    insertionsort(array,n);
    printf("sorted array:");
    for (int i=0; i<n; i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}
void insertionsort(int array[],int n)
{
    int i,key,j;
    for(i=1; i<n; i++)
    {
        key = array[i];
        j=i-1;
        while(j>=0 && array[j]> key)
        {
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=key;
    }
}
