#include <stdio.h>
int mygetchar(void);
int main()
{
    int ch;
    printf("enter a character:");
    ch=mygetchar();
    printf("the character entered is:%c\n",ch);
    return 0;
}
int mygetchar(void)
{
    int c;
    c=getchar();
    return c;
}
