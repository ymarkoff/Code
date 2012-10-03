#include<stdio.h>

int main()
{
    int x,y,w,h,lengths, heights, face;
    int i, c=0, l_mem=1, c_mem, k=0;
    struct cord
    {
           int c1;
           int c2;
    }a[10];
    
    for(x=0; x<=0;) scanf("%d", &x);
    for(y=0; y<=0;) scanf("%d", &y);
    for(w=0; w<=0;) scanf("%d", &w);
    for(h=0; h<=0;) scanf("%d", &h);
    lengths = x/w;
    heights = y/h;
    face = lengths*heights;
    if((heights<=0)||(lengths<=0))
    {
     printf("Ne e vuzmojno da se razreje taka\n");
     return 0;
    }
    printf("Broyat na malki duski, na koito mojem\nda razrejem golqmata e:%d\n", face);
    for(i=0; (i<=9)||(l_mem>heights); i++)
    {
             if(c>=x)
             {
              c=0;
              l_mem+=1;
             }
             a[i].c1 = c;
             a[i].c2 = c+=w;
             k++;
    }
    
    for(i=0; i<k; i++) printf("cordinati#%d: %d.%d;\n", i+1, a[i].c1, a[i].c2);
    system("pause");
    return 0;
}
