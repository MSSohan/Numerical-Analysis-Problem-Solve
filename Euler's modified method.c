#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
  int i=0;
  float x0,y0,x1,x2,h,y1[10],y2[10];
  printf(" Enter the initial x0=");
  scanf("%f",&x0);
  printf(" Enter initial value of y0=");
  scanf("%f",&y0);
  printf(" Enter step length h=");
  scanf("%f",&h);

  x1=x0+h;
  x2=x1+h;

  printf("\n Iteration No   y1[k+1]\n");
  y1[0]=y0+(h*((x0*x0)-y0));
  for(i=0;i<4;i++)
  {
    y1[i+1]=y0+((h/2)*(((x0*x0)-y0)+((x1*x1)-y1[i])));
    printf("      %d         %.4f\n",i,y1[i]);
  }
  printf(" Hence, y(0.1)=%.4f\n",y1[i]);

  printf("\n Iteration No   y1[k+1]\n");
  y2[0]=y1[3]+(h*((x1*x1)-y1[3]));
  for(i=0;i<4;i++)
  {
    y2[i+1]=y1[3]+((h/2)*(((x1*x1)-y1[3])+((x2*x2)-y2[i])));
    printf("      %d         %.4f\n",i,y2[i]);
  }
   printf(" Hence, y(0.2)=%.4f\n",y2[i]);
}
