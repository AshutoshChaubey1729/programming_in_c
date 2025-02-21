#include<stdio.h>

void multi(int det, int n,int arr[n][n],int brr[n],float crr[n])
{

    if(n>1) {
        for(int i=0; i<n; i++)
        {
            float z=0;
            for(int j=0; j<n; j++)
            {
                z+=arr[i][j]*brr[j];
            }
            if(det!=0)  crr[i]=z/det;
            else crr[i]=z;
        }
    }
    else crr[0]=brr[0]/det;
}

int determinant(int n,int mat[n][n],int adj[n][n])
{
    if(n==2)
    {   int z;
        for(int i=0; i<4; i++) {
            if(i==0||i==3) z=1;
            else z=-1;
            adj[i/2][i%2]=z*mat[1-i%2][1-i/2];
        }
        return mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0];
    }
    if(n==1)
        return mat[0][0];
    int arr[n-1][n-1];
    int brr[n-1][n-1];
    int det=0, red,z;


    for(int t=0; t<(n*n); t++)
    {
        red=n;
        if((t/n+t%n)%2==0) z=1;
        else z=-1;
        int row=0;
        for(int a=0; a<n-1; a++)
        {
            int col=0;
            if(row==t/n) row++;
            for(int b=0; b<n-1; b++)
            {
                if(col==t%n) col++;
                arr[a][b]=mat[row][col];
                brr[a][b]=mat[row][col];
                col++;
            }
            row++;
        }

        red--;

        int min =z*determinant( red, arr,brr);
        adj[t%n][t/n]=min;
        det+=mat[t/n][t%n]*min;


    }

    return det/n;
}

int main()
{   flag:
    printf("Enter the number of variables::");
    int n;
    scanf ("%d",&n);
    if(n<=0) {
        printf("enter natural numbers\n");
        goto flag;
    }
    int mat[n][n];
    int con[n];
    int adj[n][n];
    printf("enter the coefficients and constant \nterm below a1x1 b1x2... sequencely \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=n; j++) {
            if(j==n) printf(" = ");
            printf("%c%d",97+j,i+1);
            if(j<n) printf("x%d  ",j+1);
        }
        printf("\n");


        for(int j=0; j<=n; j++)
        {
            if(j<n) scanf("%d",&mat[i][j]);
            else scanf("%d",&con[i]);
        }
        printf("\n\n");
    }

    int D=determinant(n,mat,adj);
    float sol[n];
    multi(D,n,adj,con,sol);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(D==0)
        {
            if(sol[i]==0 )sum++;

            continue;

        }
        else
            printf("x%d = %f\n ",i+1,sol[i]);


    }
    if(sum==n) printf("the system of eequation is consistent and has infinitely many solutions");
    else if(D==0) printf("the system oof eequation is inconsistent ");



}
























