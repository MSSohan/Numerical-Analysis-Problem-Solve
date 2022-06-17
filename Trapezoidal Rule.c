#include<stdio.h>
#include<math.h>
 double f(double x)
{
  return 1/(1+(x*x));
 }
main()
{
  int n,i;
  double a,b,h,x,sum=0,integral;
  printf(" Enter the no. of sub-intervals(EVEN), n= ");
  scanf("%d",&n);
  printf(" Enter the initial limit,a= ");
  scanf("%lf",&a);
  printf(" Enter the final limit,b= ");
  scanf("%lf",&b);

  h=fabs(b-a)/n;

  for(i=1;i<n;i++)
    {
    x=a+i*h;
    sum=sum+f(x);
    }
  integral=(h/2)*(f(a)+f(b)+2*sum);
  printf("\n The integral is: %lf\n",integral);
}
