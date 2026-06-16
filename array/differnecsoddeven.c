#include<stdio.h>

int main(){
   
    int arr[6]= {1,2,3,4,5,6};
    int sumEven=0;
    int sumOdd=0;
    for(int i=0;i<=5;i++){
        if(i%2!=0){
            sumOdd+=arr[i];
        }
        else{
            sumEven+=arr[i];
        }
    }
    printf("%d",sumEven - sumOdd);
    return 0;
}
