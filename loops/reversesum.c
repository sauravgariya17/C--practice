#include<stdio.h>
int main(){

    int n;
    printf("enter n :");
    scanf("%d",&n);

    int r=0;
        int N = n;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;

    }

    int sum = N + r;

    printf("enter number %d \n",n);
    printf("enter reversed %d \n", r);
    printf("sum is %d", sum);
    return 0;
}