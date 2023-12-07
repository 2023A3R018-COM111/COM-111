#include <stdio.h>
int main(){
    int rows, cols;

    printf("enter the number of rows:");
    scanf("%d",&rows);

    printf("enter the number of columns:");
    scanf("%d",&cols);

    int myArray[rows][3];

    readArray(myArray,rows,cols);

    printfArray(myArray,rows,cols);
    return 0;
}
void readArray(int arr[][3],int rows,int cols)
{
    printf("enter element for the 2D array:\n");
    for(int i=0; i < rows; i++)
    {
        for(int j=0;  j < cols; i++)
        {
            printf("enter element at position[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
void printfArray(int arr[][3],int rows,int cols)
{
    printf("element of the 2D array:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j < cols; j++ ){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
