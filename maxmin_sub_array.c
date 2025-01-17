#include<stdio.h>
#include<limits.h>
int main(){
int arr[5];
for(int i=0;i<5;i++){
scanf("%d",&arr[i]);
}
int max=INT_MIN,min=INT_MAX,sum=0;
for(int i=0;i<5;i++){
    sum=0;
    for(int j=0;j<4;j++){
    sum+=arr[(j+4+i)%5];
    
        
    
    
    }
    if(sum>max) max=sum;
    if(sum<min) min=sum;


}
printf("%d %d",max,min);
}