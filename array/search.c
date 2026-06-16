// deletion

#include <stdio.h>
void insert(int a[],int size,int key){
    //shift element to left
     for(int i = 0;i<=size-1;i++){
        if(a[i] == key) 
        printf("%d ",a[i]);
    }
}
int main() {
    int n ;
    printf("enter size :");
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int key;
    scanf("%d",key);
    insert(a,n,key);

    return 0;
}
