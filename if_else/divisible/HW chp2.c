#include<stdio.h>
int main(){

    int cp;
    printf(" Enter cp :");
    scanf("%d",&cp);
    int sp ;
    printf("Enter sp");
    scanf("%d",&sp);

    if(sp>cp){
        printf("profit");

    }
    else{
        printf("loss");
    }
    
    return 0;
}