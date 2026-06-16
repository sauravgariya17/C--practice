#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[15];
        int age;
        int noOfMatches;
        float average;
    }cricketer;

    // 3 cricketer
    cricketer arr[3];
    for ( int i=0; i<3;i++){
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfMatches);
        scanf("%f",&arr[i].average);
    }

     for ( int i=0; i<3;i++){
      printf("name :%s",arr[i].name);
      printf("age :%d\n",arr[i].age);
      printf("noOfMatches :%d\n",arr[i].noOfMatches);
      printf("average :%f\n",arr[i].average);
      printf("\n");
    }
    return 0;
}