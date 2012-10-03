#include<stdio.h>
int main()
{
    int x, y, i, sum;
    scanf("%d", &x);
    for(y = 0; y <= x;) scanf("%d", &y);
    printf("%d, %d", x, y);
    sum=0;
    for(i=x; i<=y; i++)
    if(i%2!=0) sum+=i;
    printf("% d", sum);
    system("pause");
    return 0;
}
