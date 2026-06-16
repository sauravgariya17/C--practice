// deletion

#include <stdio.h>
void insert(int a[],int size,int idx){
    if(idx<0 || idx>size) { 
    printf("Invalid index");
        return;
    }
    //shift element to left
    int i = idx;
    while(i<=size-2){
        a[i] = a[i+1];
        i++;

    }
     for(int i = 0;i<=size-2;i++){
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
    int idx;
    scanf("%d",&idx);
    insert(a,n,idx);

    return 0;
}
