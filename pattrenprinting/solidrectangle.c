#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows :");
    scanf("%d",&n);
    // printf("enter number of column :");
    // scanf("%d",&m);

    for(int i=1; i<=n; i++){
        for(int i=1; i<=n;i++){
    printf("*");
        }
        printf("\n");

    }

    return 0;
}