// insertion

#include <stdio.h>
void insert(int a[],int size,int idx,int ele){
    if(idx<0 || idx>size) { 
    printf("Invalid index");
        return;
    }
    //shift element to right
    int i = size -1;
    while(i>=idx){
        a[i+1] = a[i];
        i--;

    }
    a[idx] = ele;
     for(int i = 0;i<=size;i++){
        printf("%d ",a[i]);
    }
}
int main() {
    int n ;
    printf("enter size :");
    scanf("%d",&n);
    int a[n+1];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int idx;
    scanf("%d",&idx);
    int ele;
    scanf("%d",&ele);
    insert(a,n,idx,ele);

    return 0;
}
