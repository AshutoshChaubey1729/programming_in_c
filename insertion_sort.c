# include<stdio.h>
# include<stdbool.h>
#include<limits.h>
int main(){
int arr[]={5,4,3,2,1,0,-1};

int n = sizeof(arr)/sizeof(arr[1])  ;
for(int k=1;k<n;k++){
    int i=k;
    
  for(int j=0;j<k;j++){
    if(arr[i-1]>arr[i]){
    int temp=arr[i];
    arr[i]=arr[i-1];
    arr[i-1]=temp;
    
    }
    i--;
      for(int i=0;i<n;i++)  
    printf("%d ",arr[i]);
    printf("\n");

}
printf("\n");
}

}