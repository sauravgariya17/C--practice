#include<stdio.h>
void england(){
    printf("you are in england\n");
    
   }
void australia(){
    printf("you are in australia\n");
    england();
   }
void india(){
    printf("you are in india\n");
    australia();
   }
int main(){
   india();
 
    return 0;
}