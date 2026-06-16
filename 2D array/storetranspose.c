#include<stdio.h>
int main(){
      int r;
    printf(" enter a number of rows :");
    scanf("%d",&r);
      int c;
    printf(" enter a number of column :");
    scanf("%d",&c);
        printf("enter all the elements \n");
        int arr[r][c];
        for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            scanf("%d ", &arr[i][j]);
        }
         }
         int brr[c][r];
         printf("\n");
           for(int i=0;i<c;i++){
        for(int j=0; j<r;j++){
            // printf("%d ", arr[j][i]);
            brr[i][j]=arr[j][i];
        }
        printf("\n");
    }
    for(int i=0; i<c;i++){
        for (int j=0; j<r; j++){
            printf("%d",brr[j][i]);
        }
        printf("\n");
    }
   
    return 0;
}