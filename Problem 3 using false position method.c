#include<stdio.h>
#include<math.h>
void main()
{
   float c,d,e,f,a=0,b=1,i,x,y,z;
   i=1; x=0;y=0;

   A:
   e=(a*a*a)-(4*a)+1;
   f=(b*b*b)-(4*b)+1;
   c=(((a*f)-(b*e))/(f-e));
   d=(c*c*c)-(4*c)+1;

   x=c;
   z=fabs(x-y);

   printf(" %.f   %.4f  %.4f  %.4f  %.4f  %.4f  %.4f \n",i,a,b,e,f,c,d);
   i++;

   if(z<0.0001)
   {
       printf("\nThe Root is %.4f\n\n",c);
       exit(0);
   }
   if(e*d<0)
   {
       b=c;
       y=c;
       goto A;
   }
   else
   {
        a=c;
        y=c;
        goto A;
   }
}
