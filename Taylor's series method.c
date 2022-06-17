#include<stdio.h>
#include<math.h>
main()
{
double sum1,sum2;
float x0,x1,x2,y0,y1,y2,y3,y4;
printf(" Enter the initial value of x0= ");
scanf("%f",&x0);
printf(" Enter the initial value of y0= ");
scanf("%f",&y0);
printf(" Enter the value of x1= ");
scanf("%f",&x1);
printf(" Enter the value of x2= ");
scanf("%f",&x2);

y1=(x0*x0*y0)-1;
y2=(2*x0*y0)+(x0*x0*y1);
y3=(2*y0)+(4*x0*y1)+(x0*x0*y2);
y4=(6*y1)+(6*x0*y2)+(x0*x0*y3);

sum1=y0+(x1*y1)+((pow(x1,2)/2)*y2)+((pow(x1,3)/6)*y3)+((pow(x1,4)/24)*y4);
sum2=y0+(x2*y1)+((pow(x2,2)/2)*y2)+((pow(x2,3)/6)*y3)+((pow(x2,4)/24)*y4);

printf("\n The solution is:- \n");
printf(" At x=%.1f , y=%.5lf\n",x1,sum1);
printf(" At x=%.1f , y=%.5lf\n",x2,sum2);
}
