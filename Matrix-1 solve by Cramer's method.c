#include<stdio.h>
#include<math.h>
void main()
{
    int n,m,i,j,k,p,d;
    float a[5][5],b[5],dx[5],temp[10],x[5];

    printf(" Enter the size of dimension (R x C)= ");
    scanf("%d %d",&n,&m);
    printf(" Enter the elements row-wise:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
           scanf("%f",&a[i][j]);
        }
    }
    printf(" Enter the constant elements column-wise:\n");
    for(i=1;i<=n;i++)
        scanf("%f",&b[i]);

    for(d=0;d<=m;d++)
    {
        if(d!=0)
         {
           for(i=1;i<=n;i++)
            {
              if(d==2||d==3)
                 {
                   a[i][1]=temp[i];
                   a[i][2]=temp[i+3];
                 }
             temp[i]=a[i][1];
             temp[i+3]=a[i][2];

             a[i][d]=b[i];
           }
         }
        i=2;k=3;
        for(j=1;j<=m;j++)
         {
           if(j==3)
              k=2;
          p=pow(-1,(1+j));
          dx[d]=dx[d]+p*(a[1][j]*((a[2][i]*a[3][k])-(a[3][i]*a[2][k])));
          i=1;
         }
        printf(" Determinant of this matrix is DX%d=%.f\n",d,dx[d]);
    }
    for(d=1;d<=m;d++)
    {
        x[d]=dx[d]/dx[0];
        printf(" X%d=%.3f\n",d,x[d]);
    }
}
