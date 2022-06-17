#include<stdio.h>
#include<math.h>
void main()
{
  float x0,y0,h,k1,k2,k3,k4,y1;
  printf(" Enter the initial X0=");
  scanf("%f",&x0);
  printf(" Enter initial value of y0=");
  scanf("%f",&y0);
  printf(" Enter step length h=");
  scanf("%f",&h);

  k1=h*((y0*y0)+(x0*x0));
  k2=h*(((y0+(k1/2))*(y0+(k1/2)))+((x0+(h/2))*(x0+(h/2))));
  k3=h*(((y0+(k2/2))*(y0+(k2/2)))+((x0+(h/2))*(x0+(h/2))));
  k4=h*(((y0+k3)*(y0+k3))+((x0+h)*(x0+h)));
  y1=y0+((k1+(2*k2)+(2*k3)+k4)/6);
  printf("\n k1=%.4f\n k2=%.4f\n k3=%.4f\n k4=%.4f\n",k1,k2,k3,k4);
  printf(" Now, y(0.1)=%.4f\n",y1);
}
