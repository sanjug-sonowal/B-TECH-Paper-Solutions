#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5,b=5,c;
    c = ++a + b++;
    printf("%d\n",c);
    printf("%d",b);
    return 0;
}