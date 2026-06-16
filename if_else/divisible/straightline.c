#include<stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3;
    printf("enter x1 :");
    scanf("%d",&x1);
        printf("enter y1 :");
    scanf("%d",&y1);
        printf("enter x2 :");
    scanf("%d",&x2);
        printf("enter y2 :");
    scanf("%d",&y2);
        printf("enter x3 :");
    scanf("%d",&x3);
        printf("enter y3 :");
    scanf("%d",&y3);

    double m1 = (y2-y1)/(x2-x1);
    double m2 = (y3-y2)/(x3-x2);
    if(m1==m2){
        printf("it is a slope");
    }
    else{
        printf("it is not a slope");
        
    }
     return 0;
}