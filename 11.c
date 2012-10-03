#include<stdio.h>
#include<math.h>

int main()
{
    int x, z=0;
    float sum=0, a[10];
    int i,k;
    
    for(x=0; (x<=0)||(x>=10);) scanf("%d", &x);
    for(i=0; i<=9; i++)
    {
             for(k=i*x; k<=(i+1)*x; k++) sum+=cos(z++);
             a[i]=sum;
             sum=0;
    }
    
    for(i=0; i<=9; i++) printf("%f\n", a[i]);
    
    system("pause");
    return 0;
}
