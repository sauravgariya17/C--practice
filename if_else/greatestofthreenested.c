#include<stdio.h>
int main(){

    int x;
    printf("enter x");
    scanf("%d",&x);
     int y;
    printf("enter y");
    scanf("%d",&y);
        int z;
    printf("enter z");
    scanf("%d",&z);

    if(x>y){
        if(x>z)
        printf("%d is greatest", x);
        else
        printf("%d is greatest", z);
    }
    else {
        if(y>z)
        printf("%d is greatest",y);
        else
        printf("%d is greatest",z);
    }



    return 0;
}