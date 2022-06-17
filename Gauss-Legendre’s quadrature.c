#include<stdio.h>
#include<math.h>
float f(float x)
{
return(x*x*x);
}
void main()
{
float a,b,p,q,result=0,x[7],w[7]; int i;
float f(float);
printf("Enter the values of a, b =");
scanf("%f %f",&a,&b);
x[1]=0.23861919; x[2]=-x[1];
x[3]=0.66120939; x[4]=-x[3];
x[5]=0.93246951; x[6]=-x[5];
w[1]=w[2]=0.46791393;
w[3]=w[4]=0.36076157;
w[5]=w[6]=0.17132449;
p=(a+b)/2; q=(b-a)/2;
for(i=1;i<=6;i++)
    result+=w[i]*f(p+q*x[i]);
    result*=q;
printf("\nThe value of the integration is %f \n",result);
}
