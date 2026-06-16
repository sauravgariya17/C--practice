#include<stdio.h>
int main(){

    int n;
    printf("enter a number :");
    scanf("%d",&n);

    int sum = 0;
    int LastDigit = 0;
    while (n!=0){
        LastDigit=n%10;
        sum=sum+LastDigit;
        n=n/10;

    }
    printf("the sum of digits are %d ", sum);
    return 0;
}