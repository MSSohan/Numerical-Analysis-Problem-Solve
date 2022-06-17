#include<stdio.h>
#include<math.h>
main()
{
  float x[10],y[10],y0,y1,y2,y3,y4,p,c,h,y4p,y4c,y5c,y5p,y5 ;
  printf(" Enter the value of x0 & y0=");
  scanf("%f %f",&x[0],&y[0]);
  printf(" Enter the value of x1 & y1=");
  scanf("%f %f",&x[1],&y[1]);
  printf(" Enter the value of x2 & y2=");
  scanf("%f %f",&x[2],&y[2]);
  printf(" Enter the value of x3 & y3=");
  scanf("%f %f",&x[3],&y[3]);
  printf(" Enter the value of x4=");
  scanf("%f",&x[4]);
  printf(" Enter the value of x5=");
  scanf("%f",&x[5]);
  printf(" Enter step length h=");
  scanf("%f",&h);

  y0=x[0]-(y[0]*y[0]);
  y1=x[1]-(y[1]*y[1]);
  y2=x[2]-(y[2]*y[2]);
  y3=x[3]-(y[3]*y[3]);

  y4p=y[0]+((4*h)*((2*y1)-y2+(2*y3)))/3;
  y4=x[4]-(y4p*y4p);
  printf("\n Predictor value of y4=%.4f\n",y4p);
  y4c=y[2]+(h*(y2+(4*y3)+y4)/3);
  printf(" Corrector value of y4=%.4f",y4c);
  printf("\n Hence,at x=%.1f, y(%.1f)=%.4f\n",x[4],x[4],y4c);

  y4=x[4]-(y4c*y4c);
  y5p=y[1]+((4*h)*((2*y2)-y3+(2*y4)))/3;
  y5=x[5]-(y5p*y5p);
  printf("\n Predictor value of y5=%.4f\n",y5p);
  y5c=y[3]+(h*(y3+(4*y4)+y5)/3);
  printf(" Corrector value of y5=%.4f",y5c);
  printf("\n Hence,at x=%.1f, y(%.1f)=%.4f\n",x[5],x[5],y5c);
}
