#include<stdio.h>
#include<math.h>
main()
{
    float x[20],y[20],f,s,u,h,p;
    int j,i,k,n;
    printf(" Enter the value of the elements= ");
    scanf("%d",&n);
    printf(" Enter the value of x,y= \n");
    for(i=1;i<=n;i++)
        {
            scanf("%f %f",&x[i],&y[i]);
        }
    printf(" Enter the searching Year= ");
    scanf("%f",&f);

    h=x[2]-x[1];
    u=(f-x[1])/h;
    s=y[1];
    p=1;
    for(k=1;k<n;k++)
        {
            for(j=1;j<n;j++)
                {
                    y[j]=y[j+1]-y[j];
                }
            p=p*(u-k+1)/k;
            s=s+p*y[1];
        }
    printf(" So,In %.f the population is = %.3f ~ %.f",f,s,round(s));
    getch();
}
