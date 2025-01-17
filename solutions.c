#include<stdio.h>


int cof(int n,int mat[n][n])
{
    if(n==2)
        return mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0];
    if(n==1)
        return mat[0][0];
    int arr[n-1][n-1];
    int det=0, red,z=-1;


    for(int t=0; t<n; t++)
    {
        red=n;
        z=-z;
        for(int a=0; a<n-1; a++)
        {
            int col=0;
            for(int b=0; b<n-1; b++)
            {
                if(col==t) col++;
                arr[a][b]=mat[a+1][col];
                col++;
            }
        }

        red--;

        int min =cof( red, arr);
        det+=z*mat[0][t]*min;


    }

    return det;
}

int main()
{
    printf("Enter the number of variables::");
    int n;    scanf ("%d",&n);
    int mat[n][n]; int cram[n][n];int con[n];
        
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<=n;j++){
        if(j==n) printf("    =    ");
       printf("%c%d    ",97+j,i);}
       printf("\n");
       
    
    for(int j=0; j<=n;j++)
      if(j<n)scanf("%d",&mat[i][j]);
      else scanf("%d",&con[i]);
      printf("\n\n");
    }
    
    int D=cof(n,mat);
    
    int sol[n];
    for(int i=0;i<n;i++)
    {
       for(int i=0;i<n;i++)
        {for(int j=0; j<n;j++)
          cram[i][j]=mat[i][j];}
    
        for(int j=0;j<n;j++)
        {
            cram[j][i]=con[j];
         }
         int D1=cof(n,cram);
         
        sol[i]=D1/D;
    
        printf("%d  ",sol[i]);
    }
    
    
    
   
    





}































    