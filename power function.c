#include <stdio.h>
void printline(char c);
void value(float principal, float inrate, int period);
int mian(){
    float principal, inrate,peroid;
    int period;
    printf("enter principal amount,interst rate,and periods:\n");
    scanf("%f%f%d",&principal,&irate,&peroid);
    printf('*',52);
    amount = value(principal,inrate,period);
    printf("\n%f\t%f\t%ed\t5f\n\n",principal,inrate,period,amount);
    printline('=',52);
    return 0;
}
void printline(char c, int len){
    int i;
    for(i=1;i<=len;i++)
    printf("%c",ch);
printf("\n");
}
float value(float p, float r, int n){
    int year;
    float sum;
    sum=p;
    year=1;
    while(year<=n){
        sum = sum * (1+r);
        year= year +1;
    }
    return suum;
}
