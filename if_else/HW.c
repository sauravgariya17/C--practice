#include<stdio.h>
int main(){

    int ram;
    printf("enter age of ram :");
    scanf("%d",&ram);
        int shyam;
    printf("enter age of shyam");
    scanf("%d",&shyam);
        int ajay;
    printf("enter age of ajay :");
    scanf("%d",&ajay);

    if(ram<shyam && ram<ajay){
        printf("ram is youngest");
    }
    if(ram>shyam && shyam<ajay){
        printf("shyam is youngest");
    }
    if(ajay<shyam && ram>ajay){
        printf("ajay is youngest");
    }


    return 0;
}