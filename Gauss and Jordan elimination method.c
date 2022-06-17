#include<stdio.h>
#include<math.h>
main()
{
int i,j,k,n;
float a[5][5],c,x[5];
printf(" Enter the size of matrix: ");
scanf("%d",&n);
printf(" Enter the elements of augmented matrix row-wise:\n");
for(i=1; i<=n; i++)
{
    for(j=1; j<=(n+1); j++)
    {
        scanf("%f",&a[i][j]);
    }
}

for(j=1; j<=n; j++)
{
    for(i=1; i<=n; i++)
    {
        if(i!=j)
        {
            c=a[i][j]/a[j][j];
            for(k=1; k<=n+1; k++)
            {
                a[i][k]=a[i][k]-c*a[j][k];
            }
        }
    }
}
printf("\n The solution is:\n");
for(i=1; i<=n; i++)
{
    x[i]=a[i][n+1]/a[i][i];
    printf(" X%d=%.2f\n",i,x[i]);
}
}
