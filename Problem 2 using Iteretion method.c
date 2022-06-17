#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,x,n,Cx;
    printf("Enter the initial value Xo= ");
    scanf("%f",&x);
    printf(" n     Xn    Root\n");


    Cx=fabs(-sin(x)/3);
    if(Cx<1)
    {
         A:
            a=x;
            x=(1+cos(x))/3;
            b=x;
            printf(" %.f   %.3f   %.3f \n",n,a,b);
            c=fabs(a-b);
            n++;
            if(c<0.00001)
            {
                printf("\nThe Root is %.4f\n\n",x);
                exit(0);
            }
         goto A;
    }
    else
        printf("Convergency doesn't exist\n\n");
}
