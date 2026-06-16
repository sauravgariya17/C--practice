#include<stdio.h>
int main(){
    int l;
    printf("enter l :");
    scanf("%d",&l);
     int b;
    printf("enter b :");
    scanf("%d",&b);

    int area = l*b;
    int perimeter = 2*(l+b);
    if( area > perimeter){
        printf("yes area is greater than its perimeter");
    }
    else {
        printf("area is not greater than its perimeter");
    }


    return 0;
}