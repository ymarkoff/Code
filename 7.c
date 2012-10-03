#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int third(double input);

int main()
{
    int x;
    double a[10];
    int i, c=0;
    
    for(x=999; (x<0)||(x>=10);) scanf("%d", &x);
    for(i=0;;i++)
    {
                 if(c>9) break;
                 if(third(cos(i)) == x)
                 {
                                    a[c]=cos(i);
                                    c++;
                 }
    }
    for(i=0;i<=9;i++) printf("%f\n", a[i]);
    system("pause");
    return 0;
}

int third(double input)
{
    int work_num;
    
    input*=1000;
    work_num = (int)input;
    return work_num % 10;
}
