# include <stdio.h>
int main(){ 
int n;
scanf("%d",&n);
int *ptr=malloc(n*n*sizeof(int));
for(int i=0;i<n*n;i++){
    scanf("%d",&ptr[i]);
}
int s=0,t=0;
for(int i=0, j=n*n-n;i<n*n;i++,j++){
 s+=ptr[i];
 i+=n;
 t+=ptr[j];
 j-=n;
  
 }
 printf("%d",s-t);
 }