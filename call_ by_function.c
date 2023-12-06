#include <stdio.h>
void swapx(int x, int y);
int mian()
{
    int a=10,b=20;
    swapx(a,b);
    printf("In the caller function value are:\n a=%d b=%d\n",a,b);
    return 0;
    }
    void swapx(int x,int y)
    {
        int t;

        t=x;
        x=y;
        y=t;

        printf("inside function values are:\nx =%d y=%d\n",x,y);
    }
