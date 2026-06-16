#include<stdio.h>
int main(){
    int arr[5]= {12,52,10,18,89};
    int min = arr[0];
    for(int i =1; i <=4; i++){
        if(min>arr[i]){
            min = arr[i];

        }

    }
    printf("%d",min);
    return 0;
}