#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float a,b,x[20],y[20],sumx=0,sumy=0,sumxy=0,sumx2=0;
    printf(" Enter the value of number of terms n:");
    scanf("%d",&n);
    printf(" Enter the values of x:");
    for(i=1;i<=n;i++)
        {
            scanf(" %f",&x[i]);
        }
    printf(" Enter the values of y:");
    for(i=1;i<=n;i++)
        {
            scanf("%f",&y[i]);
        }
    for(i=1;i<=n;i++)
        {
            sumx=sumx +x[i];
            sumx2=sumx2 +(x[i]*x[i]);
            sumy=sumy +y[i];
            sumxy=sumxy +(x[i]*y[i]);
        }
    a=((n*sumxy)-(sumx*sumy))/((n*sumx2)-(sumx*sumx));
    b=((sumy/n)-(a*(sumx/n)));
    printf("\n The line is Y=%3.5f - %3.5fX\n",b,a);

    return(0);
}
