#include<stdio.h>

int a[10];

int fib(int x, int inp, int p_inp, int count);

int main()
{
    int x;
    int i;
    
    for(x=999;(x<0)||(x>=10);) scanf("%d", &x);
    fib(x, 1, 0, 0);
    for(i=0;i<=9;i++) printf("%d\n", a[i]);
    
    system("pause");
    return 0;
}
    
    
int fib(int x, int inp, int p_inp, int count)
{
    if(inp%x==0)
    {
                 a[count]=inp;
                 if(count==9) return 0;
                 count++;
    }
    return(fib(x, inp+p_inp, inp, count));
}
