#include<stdio.h>
int main(){
    int r;
    printf(" enter a number of rows :");
    scanf("%d",&r);
      int c;
    printf(" enter a number of column :");
    scanf("%d",&c);
    int arr[3][3];
     for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            scanf("%d ", &arr[i][j]);
        }
         }
         printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // arr[0][0]=1;
    // arr[0][1]=2;
    // arr[1][0]=3;
    // arr[1][1]=4;

    return 0;
}