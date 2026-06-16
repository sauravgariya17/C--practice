#include<stdio.h>
int main(){

    int a;
    printf("enter a :");
    scanf("%d",&a);
    int b;
    printf("enter b :");
    scanf("%d",&b);
    int c;
    printf("enter c :");
    scanf("%d",&c);
    int d;
    printf("enter d :");
    scanf("%d",&d);

    if( a>b && a>c && a>d){
    printf("%d is greatest",a);
    }
        if( b>c && b>d && b>a){
    printf("%d is greatest",b);
     }
        if( c>d && c>a && c>b){
    printf("%d is greatest",c);}
        if( d>a && d>b && d>c){
    printf("%d is greatest",d);
        }






    return 0;
}