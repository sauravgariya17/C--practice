#include<stdio.h>
int main(){
    int arr[5]={12,54,65,87,20};
    int max = arr[0];
    for(int i=1; i<=4;i++){
    if(max<arr[i]){
        max = arr[i];
    
    }
   
}
 printf("%d",max);
    return 0;
}