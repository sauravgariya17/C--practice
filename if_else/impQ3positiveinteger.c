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

    if( x>y && x>z){
        printf("%d is greater",x);
    }

     if( y>z && y>x){
        printf("%d is greater",y);
    }

     if( z>x && z>y){
        printf("%d is greater",z);
    }



    return 0;
}