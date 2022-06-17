#include<stdio.h>
#include<math.h>
int n; float x[20],xg;
float wd(int);
void main()
{
int i,j,flag=-1;
float y[20],sum1=0,sum2=0,prod,t,t1=1,result;
printf("Enter the value of n=");
scanf("%d",&n);
printf("Enter the data in the form (x[i],y[i]) \n");
for(i=0;i<=n;i++)
    scanf("%f %f",&x[i],&y[i]);
printf("Enter the value of x at which derivative is required=");
scanf("%f",&xg);

for(i=0;i<=n;i++) if(x[i]==xg) flag=i;
    if(flag==-1)
        {
            for(i=0;i<=n;i++)
                {
                    t=y[i]/((xg-x[i])*wd(i));
                    sum1+=t;
                    sum2+=t/(xg-x[i]);
                }
            t=0;
            for(j=0;j<=n;j++)
                {
                    prod=1;
                    for(i=0;i<=n;i++)
                        if(i!=j) prod*=(xg-x[i]);
                            t+=prod;
                }
            for(i=0;i<=n;i++) t1*=(xg-x[i]);
                result=t*sum1-t1*sum2;
        }
    else
        {
            j=flag;
            for(i=0;i<=n;i++)
                if(i!=j)
                    {
                        sum1+=y[i]/((x[j]-x[i])*wd(i));
                        sum2+=1/(x[j]-x[i]);
                    }
                result=wd(j)*sum1+y[j]*sum2;
        }
printf("\nThe value of derivative at x= %6.4f is %8.5f\n",xg,result);
}
float wd(int j)
{
int i;float prod=1;
for(i=0;i<=n;i++) if(i!=j) prod*=(x[j]-x[i]);
return prod;
}
