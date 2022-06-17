#include<stdio.h>
#include<math.h>
main()
{
    int i,j,k,n;
    float A[5][5],c,x[10],sum;
    printf(" Enter the order of matrix: ");
    scanf("%d",&n);
    printf(" Enter the elements of augmented matrix row-wise:\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            scanf("%f",&A[i][j]);
        }
    }
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                c=A[i][j]/A[j][j];
                for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                }
            }
        }
    }
    printf(" The Upper-Triangle form is:\n");
    for(i=1; i<=n; i++)
    {
        for(k=1; k<=n+1; k++)
        {
            printf(" %.3f  ",A[i][k]);
        }
        printf("\n");
    }
    x[n]=A[n][n+1]/A[n][n];
    for(i=n-1; i>=1; i--)
    {
        sum=0;
        for(j=i+1; j<=n; j++)
        {
            sum=sum+A[i][j]*x[j];
        }
        x[i]=(A[i][n+1]-sum)/A[i][i];
    }

    printf("\n The solution is:");
    for(i=1; i<=n; i++)
    {
        printf("\n X%d=%.2f\t",i,x[i]);
    }
}
