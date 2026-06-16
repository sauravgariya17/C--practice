#include<stdio.h>
typedef int* pointer;
int main(){
    int x=3, y=4;
    pointer a=&x, b=&y;
   
      printf("%p\n",a);
      printf("%p\n",b);
    return 0;
}