#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, a[10];
    div_t divresult;
    int i,k,c=0,bool;
    
    for(x=0;(x<=0)||(x>=10);) scanf("%d", &x);
    for(i=0;;i++)
    {
                 bool=1;
                 for(k=2; k<7; k++)
                 {
                          if( (k==4) || (k==6) ) continue;
                          if( (i%k==0) && (i!=k) ) bool=0;
                 }        
                          if(bool==0) continue;

                          divresult=div(i,10);
                          if(divresult.rem==x) 
                          {
                           a[c]=i;
                           c++;
                          }
                 if(c>=10) break;
    }
    for(i=0; i<=9; i++) printf("%d\n", a[i]);
                          
    system("pause");
    return 0;
}                            
