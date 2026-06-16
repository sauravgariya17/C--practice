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
    if(cp>sp){
        printf("loss");
    }
    if(cp==sp){
      printf("no profit no loss");
    }
    return 0;
}