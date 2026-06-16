#include<stdio.h>
int main(){

    int n;
    printf("enter value of n :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int nsp=n-1;
        for(int q=1;q<=nsp;q++){
            printf(" ");
        }
        nsp--;
        for (int j=1;j<=i;j++){
            
            char ch=(char)(j+64);
            printf("%c",ch);
        }
        int a=i-1;
        for(int k=1;k<=a;k++){
            char ch=(char)(a+64);
            printf("%c",ch);
            a--;
        }
        printf("\n");
    }
    return 0;
}