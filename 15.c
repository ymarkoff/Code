#include<stdio.h>
#include<stdlib.h>

int fib();

int main()
{
    int x, a[10];
    int *ptr;
    
    for(x=0; (x<=0)||(x>=10);) scanf("%d", &x);
    ptr = a;
    fib(1,0,ptr,0,x);
    for(x=0; x<=9; x++) printf("%d\n", a[x]);
    
    system("pause");
    return 0;
}
    
    
    
    
    
    
    
    
int fib(int num, int num_prev, int *a, int c, int x)
{
    div_t divresult;
    
    if(c==10) return 0;
    divresult = div(num,10);
    if(divresult.rem==x){
                         a[c]=num;
                         c++;
                         }
    return(fib(num+num_prev, num, a, c, x));
}
