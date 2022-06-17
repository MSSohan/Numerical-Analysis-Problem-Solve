#include<stdio.h>
#include<math.h>
void main()
{
   float c,d,e,f,a=-1,b=-2,i,x,y,z;
   i=1; x=0;y=0;
   printf(" I.N     a        b      f(a)    f(b)   Root(c)   f(c)\n");

   A:
   e=(a*a)-(4*a)-10;
   f=(b*b)-(4*b)-10;
   c=(((a*f)-(b*e))/(f-e));
   d=(c*c)-(4*c)-10;

   x=c;
   z=fabs(x-y);

   printf(" %.f   %.4f  %.4f  %.4f  %.4f  %.3f  %.4f \n",i,a,b,e,f,c,d);
   i++;
   if(z<0.0001)
     {
       printf("\nThe Root is %.3f\n\n",c);
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
