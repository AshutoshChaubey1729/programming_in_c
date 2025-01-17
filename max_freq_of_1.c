# include <stdio.h>
int main(){
 
 int arr[]={1,1,0,1,1,1,1,0,0,0,0,1,1,0,1,1,1,1,1,1,0,0,1,1,1,0};
 int pr=0,cr=0;
  printf("the frquency of consecutive ones are :\n");
  for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
      if(arr[i]==0){
       cr=0;
       continue;
       }
      if(arr[i]==1){
          cr++;
          
     }            
     if(cr>pr)                    //2 4 2 6 3
     pr=cr;
     
 }
 printf("\nThe maximum frequency is %d.",pr);
 }    