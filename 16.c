#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int x, a[10];
    int i,c=0;
    
    for(x=-1; x<0;) scanf("%d", &x);
    for(i=1;c<=9;i+=2) if(x%i==0) a[c++]=i;
    for(i=0; i<=9; i++) printf("%d\n", a[i]);
             
    system("pause");
    return 0;
}
