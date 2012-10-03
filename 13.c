#include<stdio.h>

int main()
{
    int x, sum=0, a[10];
    int k, i;
    
    for(x=0; (x<=0)||(x>=10);) scanf("%d", &x);
    for(i=0;i<=9; i++)
    {
             for(k=0; k<=999; k++) if((float)k/((i+1)*x)-k/((i+1)*x)==0) sum+=k;
             a[i]=sum;
             sum=0;
    }
    for(i=0; i<=9; i++) printf("\n%d", a[i]);
    
    system("pause");
    return 0;
}
