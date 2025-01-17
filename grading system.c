#include<stdio.h>
int main(){
int x;
scanf("%d",&x);
int arr[x];
for(int i=0;i<x;i++)
    scanf("%d",&arr[i]);
    
    
for(int i=0;i<x;i++)
{    
    int r;
    if((r=5-arr[i]%5)<3) arr[i]+=r;
    printf("%d    ",arr[i]);


 return 0;
}


}