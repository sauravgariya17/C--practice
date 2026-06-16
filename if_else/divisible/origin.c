#include<stdio.h>
int main(){

    int x,y;
    printf("enter the coordinates :");
    scanf("%d %d", &x,&y);

    if(x==0 && y==0){
        printf("it lies in origin");
    }
    
    else if(x==0){
        printf("it lies in y origin");
    }
    
   else if(y==0){
        printf("it lies in x origin");
    }
    else{
        printf("itt does not lies either x or y");
    }
        return 0;
}