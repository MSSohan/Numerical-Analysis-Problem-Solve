#include<stdio.h>
#include<math.h>
main()
{
double sum1,sum2;
float x0,x,x1,x2,y0,y1,y2,y3,y4;
printf(" Enter the initial value of x0= ");
scanf("%f",&x0);
printf(" Enter the initial value of y0= ");
scanf("%f",&y0);
printf(" Enter the value of x1= ");
scanf("%f",&x1);
printf(" Enter the value of x2= ");
scanf("%f",&x2);

y1=y0+(pow(x,3)/3);
y2=y1+(pow(x,4)/12);
y3=y2+(pow(x,5)/60);
y4=y3+(pow(x,6)/360);

sum1=y0+(pow(x1,3)/3)+(pow(x1,4)/12)+(pow(x1,5)/60)+(pow(x1,6)/360);
sum2=y0+(pow(x2,3)/3)+(pow(x2,4)/12)+(pow(x2,5)/60)+(pow(x2,6)/360);

printf("\n The solution is:- \n");
printf(" At x=%.1f , y=%e\n",x1,sum1);
printf(" At x=%.1f , y=%e\n",x2,sum2);
}
