#include<stdio.h>
#include<math.h>
main()
{
    float x[20],y[20],f,s,v,h,p;
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
    v=(f-x[n])/h;
    s=y[n];
    p=1;
    for(k=1;k<n;k++)
        {
            for(j=n;j>=1;j--)
                {
                    y[j]=y[j]-y[j-1];
                }
            p=p*(v+k-1)/k;
            s=s+p*y[n];
        }
    printf(" So,In %.f the population is = %.3f ~ %.f",f,s,round(s));
    getch();
}
