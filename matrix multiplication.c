

# include <stdio.h>
int main()
{
    flag:{
    int m,n,a,b;
     printf("row no. of matrix1:");
     scanf("%d\n",&m);
     printf("column no. of matrix1:");
     scanf("%d\n",&n);
     printf("row no. of matrix2:");
     scanf("%d\n",&a);
     printf("column no. of matrix2:");
     scanf("%d\n",&b);
     if(n!=a)
    {
     printf("column no. of matrix1 and row no. of matrix2 must be same for matrix multiplication ");
     goto flag;
     }
     
     int arr[m][n];
     int brr[a][b];
     int crr[m][b];
     
     printf("matrix1 elements");
     
        
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             scanf("%d",&arr[i][j]);
         }    
           printf("\n");
     }
     printf("matrix2 elements");
     
      for(int i=0;i<a;i++)
     {
         for(int j=0;j<b;j++)
         {
             scanf("%d",&brr[i][j]);
         }    
           printf("\n");
     }

     for(int i=0;i<m;i++){
       for(int k=0;k<b;k++){
         int z=0;
         for(int j=0;j<n;j++){
           z+=arr[i][j]*brr[j][k];
           crr[i][k]=z;
         
        
           
         }
         }
       }
  }
   return 0;
  
  
}





    