#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int NoOfPages;
    } a,b,c;


    a.NoOfPages=100;
    a.price=411.5;
   strcpy(a.name,"secret seven");

   b.NoOfPages=200;
    b.price=611.5;
   strcpy(b.name,"secret eight");

    printf("%d\n",a.NoOfPages);
     printf("%f\n",a.price);
      printf("%s\n",a.name);

        printf("%d\n",b.NoOfPages);
     printf("%f\n",b.price);
      printf("%s\n",b.name);
    return 0;
}