#include<stdio.h>
#include<math.h>
void main()
{
  int i=0;
  float x0,y0,xn,h,x,y;
  printf(" Enter the initial X0=");
  scanf("%f",&x0);
  printf(" Enter the final Xn=");
  scanf("%f",&xn);
  printf(" Enter initial value of y0=");
  scanf("%f",&y0);
  printf(" Enter step length h=");
  scanf("%f",&h);
  printf("\n N    Xn       Yn          Y(n+1)\n");
  for(x=x0;x<xn+h;x=x+h)
    {
       y=(y0+(h*(x+y0)));
       printf(" %d    %.1f    %f    %f \n",i,x,y0,y);
       y0=y;
       i=i+1;
    }
  printf("\n The approx. value of y is %f\n\n",y);
}
