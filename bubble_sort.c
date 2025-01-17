# include<stdio.h>
# include<stdbool.h>
int main(){
int arr[]={5,4,3,2,1,0,-1};

int size = sizeof(arr)/sizeof(arr[1]) -1 ;
for(int i=0;i<size;i++)
{     
    bool flag=true;

   for(int j=0;j<size-i;j++)
    {
        if(arr[j+1]<arr[j])
        {int temp = arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        flag=false;}
        for(int k=0;k<=size;k++)
        printf("%d ",arr[k]);
        
        printf("\n");
    }
    
    
    if(flag==true)
    break;
    printf("\n");


}

}