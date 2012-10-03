#include<stdio.h>
int fib(int x, int y, int sumz);
int main()
{
    int x,y,i,sum=0;
    scanf("%d", &x);
    for(y=0; y<=x;) scanf("%d", &y);
    printf("%d", fib(x,y,0));
    system("pause");
    return 0;
}

int fib(int x, int y, int sumz)
{
    if(y==x) return(sumz+y);
    else
    return(fib(x, y-1, sumz+y));
}
