#include <stdio.h>
void printline(void);
void value9(void);
int main()
{
    printline();
    value();
    printline();
    return 0;
}
void printline(void)
{
    int i;
    for(i=1;i<=35;i++)
        printf("%c",'_');
    printf("\n");
}
void value(void)
{
    int year,period;
    float inrate,sum,principal;
    printf("principle amount?");
    scanf("%f",&principal);
    printf("interest rate?");
    scanf("%f",&inrate);
    printf("period?");
    scanf("%d",&period);
    sum=principal;
    year=1;
    while(year<=period)
    {
        sum=sum*(1++inrate);
        year=year+1;
    }
    printf("\n%8.2 f%5.2 f%5 d%12.2 f\n",principal,inrate,period,sum);
}
