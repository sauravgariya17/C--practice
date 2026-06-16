#include<stdio.h>
int main(){

    int n;
    printf("enter n :");
    scanf("%d",&n);

    int product=1;
    for (int i=1; i<=n;i++){
        product=product*i;
    }

    printf("product is %d", product);
    return 0;
}