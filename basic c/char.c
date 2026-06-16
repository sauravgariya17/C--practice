#include<stdio.h>
int main (){

    int x;
    printf("enter a numner :");
    scanf("%d", &x);

    int remainder = x / 2;
    printf("remainder is : %d", remainder);
    return 0;
}