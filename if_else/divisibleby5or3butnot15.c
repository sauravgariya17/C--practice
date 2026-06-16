#include<stdio.h>
int main(){

    int n;
    printf("enter a number :");
    scanf("%d",&n);

    // if(n%5==0 || n%3==0){
    //     if(n%3==0){
    //         if(n%15!=0){
    //                     printf("n is divisible by 5 or 3");
    //         }
    //         else{
    //             printf("n is not divisible by 15");
    //         }

    //     }
    if((n%5==0 || n%3==0) && n%15!=0){
        printf("n is divisible by 5 or 3 but not 15");
    }
        else{
            printf("n is not divisible by 5 or 3");
            

        }
    
    
    return 0;
}