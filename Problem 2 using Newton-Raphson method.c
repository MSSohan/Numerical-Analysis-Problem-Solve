#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,x,n,d,e;
    printf("Enter the initial value Xo= ");
    scanf("%f",&x);
    printf(" n     Xn      f(Xn)    f'(Xn)    Root\n");

    A:
    d=(3*x)-cos(x)-1;
    e=(3+sin(x));
    a=x;
    x=(x-(d/e));
    b=x;
    printf(" %.f   %.4f   %.4f   %.4f   %.4f \n",n,a,d,e,b);
    c=fabs(b-a);
    n++;
    if(c<0.0001)
        {
           printf("\nThe Root is %.4f\n\n",x);
           exit(0);
        }
    goto A;
}
