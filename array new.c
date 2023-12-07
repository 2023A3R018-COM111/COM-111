#include <stdio.h>
#define maxval 50
#define counter 11
 int main()
 {
     float value[maxval];
     int i, low, high;
     int group[counter]={0,0,0,0,0,0,0,0,0,0,0};
     
     printf("enter marks for %d student:\n",maxval);
     
     for(i=0; i<maxval; i++)
     {
         printf("enter marks for student %d:",i+1);
         scanf("%f",&value[i]);
         ++group[(int)(value)[i]/10];
     }
printf("\n group range frequency\n\n");
for (i=0; i<counter; i++)
{
    low = i * 10;
    if (i==10)
        high = 100;
    else
        high = low +9;
    printf("%2d %3d\t to %3d\t %d\n ", i+1, low, high, group[i]);
}
return 0;
}