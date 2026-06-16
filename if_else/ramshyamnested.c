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

    if(ram>shyam){
        if(ram>ajay)
        printf("ram age is greatest");
        else
        printf("ajay age is greatest");
    } 
    else {
        if (shyam>ajay)
        printf("shyam is greatest");
        else
        printf("ajay is greatest");
    }




    return 0;
}