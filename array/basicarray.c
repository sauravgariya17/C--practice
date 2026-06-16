#include<stdio.h>
int main(){
    int arr[5];
    // arr[4]=100;
    for(int i=0;i<=4;i++){
        int a=i+1;
        printf("\nenter element number %d",a);
        scanf("%d",& arr[i]);

    }
    printf("%d ",arr[1]);
    // printf("%d",arr[4]);
    // float a[3]={1.2,2.3,3.4};
    // printf("%f",a[0]);
    

   
    return 0;
}