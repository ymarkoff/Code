#include<stdio.h>

int main()
{
    int x,sum=0,n, a[10];
    int i,k,break_counter=0;
    for(x=0; (x<=0)||(x>=10);) scanf("%d", &x);
    for(i=0;;i++)
    {
                 
                 if(((float)i/x)-i/x==0)
                 {
                          n=i;      
                          for(k=0;k<=n;k++) sum+=k;
                          a[break_counter++]=sum;
                          sum=0;
                 }
                 if (break_counter==10) break;
    }
    for(i=0; i<=9; i++) printf("%d\n", a[i]);
    
    system("pause");
    return 0;
}
