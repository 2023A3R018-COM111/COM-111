#include <stdio.h>
float addition(float x,float y)
{
    float result;
    result=x+y;
    return(result);
}
float subtraction (float x, float y)
{
    float result;
    result=x-y;
    return(result);
}
float multiplication (float x,float y)
{
    float result;
    result=x*y;
    return(result);
}
float divide( float x, float y)
{
    float result;
    result=x/y;
    return(result);
}
float modulus(float x,float y)
{
    float result;
    resuilt=x%y;
    return(result);
}
int main(){
    float x,y;
    printf("enter the value:=");
    sacnf("%f%f",&x,&y);
    printf("adddition %f\n",addition(x,y));
    printf("substraction %f"\n,substraction(x,y));
    printf("multiplication %f"\n,multiplication(x,y));
    printf("divide %f"\n,divide(x,y));
    printf("modulus %f"\n, =modulus(x,y));
}