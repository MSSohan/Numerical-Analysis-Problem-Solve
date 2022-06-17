#include<stdio.h>
#include<math.h>
main()
{
    int i,j,k,n,m;
    float A[10][10],c,x[5];
    printf(" Enter the order of matrix: ");
    scanf("%d %d",&n,&m);
    printf(" Enter the elements of augmented matrix row-wise:\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            scanf("%f",&A[i][j]);
        }
    }
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(i!=j)
            {
                c=A[i][j]/A[j][j];
                for(k=1; k<=m; k++)
                {
                    A[i][k]=A[i][k]-(c*A[j][k]);
                }
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        for(k=4; k<=m; k++)
        {
            A[i][k]=A[i][k]/A[i][i];
        }
        A[i][i]=A[i][i]/A[i][i];
        for(k=1; k<=m; k++)
        {
            printf(" %.3f  ",A[i][k]);
        }
        printf("\n");
    }
    printf("\n A^-1=  \n");
    for(i=1; i<=n; i++)
    {
        for(k=4; k<=m; k++)
        {
            printf("      %.3f ",A[i][k]);
        }
        printf("\n");
    }
}
