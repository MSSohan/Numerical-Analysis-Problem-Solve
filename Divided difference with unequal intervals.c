#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int x[10], y[10], p[10];
    int k,f,n,i,j=1,f1=1,f2=0;
    printf(" Enter the number of elements = ");
    scanf("%d",&n);
    printf(" Enter the different values of x,y:\n");
    for (i=1;i<=n;i++)
        scanf("%d %d", &x[i],&y[i]);
    printf(" Enter the value of 'k' in f(k) you want to evaluate, k= ");
    scanf("%d",&k);

    f=y[1];
    do
    {
        for (i=1;i<=n-1;i++)
            {
                p[i] = ((y[i+1]-y[i])/(x[i+j]-x[i]));
                y[i]=p[i];
            }
        f1=1;
        for(i=1;i<=j;i++)
            {
                f1*=(k-x[i]);
            }
        f2+=(y[1]*f1);
        n--;
        j++;
    }
    while(n!=1);
    f+=f2;
    printf("\n So, f(%d) = %d",k,f);
    getch();
}
