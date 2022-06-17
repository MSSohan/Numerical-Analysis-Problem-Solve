#include<stdio.h>
#include<math.h>
void main()
{
   float c,d,e,f,a=0,b=1,i,x,y,z;
   i=1; x=0;y=0;
   printf(" I.N     a        b      f(a)    f(b)   Root(c)   f(c)\n");

   A:
   e=(3*a)-cos(a)-1;
   f=(3*b)-(cos(b))-1;
   c=(a+b)/2;
   d=(3*c)-cos(c)-1;

   x=c;
   z=fabs(x-y);

   printf(" %.f   %.4f  %.4f  %.4f  %.4f  %.4f  %.4f \n",i,a,b,e,f,c,d);
   i++;

   if(z<0.0001)
   {
       printf("\n The Root is %.4f\n\n",c);
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
