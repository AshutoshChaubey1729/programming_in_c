# include<stdio.h>
# include<stdbool.h>
#include<limits.h>
int main(){
int ind,arr[]={5,4,3,2,1,0,-1};

int n = sizeof(arr)/sizeof(arr[1])  ;
for(int j=0;j<n-1;j++){
 int min= INT_MAX;
for(int i=j;i<n;i++){
   
    if(arr[i]<min){
    min=arr[i];
    ind=i;
    }
}
int temp=arr[j];
arr[j]=arr[ind];
arr[ind]=temp;
for(int i=0;i<n;i++)
printf("%d  ",arr[i]);
printf("\n");


}

}