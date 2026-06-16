#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={5,4,7,6,7};
    int max = INT_MIN;
    int smax = INT_MIN;
//     for(int i=0; i<=4;i++){
//     if(max<arr[i]){
//         smax=max;
//         max = arr[i];
    
//     }
   
// }
//  for(int i=0; i<=4;i++){
//     if(arr[i]!=max && smax<arr[i]){
//         smax = arr[i];
    
//     }
   
// }
      for(int i=0;i<=6;i++){
        if(max<arr[i]){
        smax=max;
        max=arr[i];
      }
      else if(smax<arr[i] && max!=arr[i]){
         smax= arr[i];
      }
    }

 printf("%d",smax);
    return 0;
}