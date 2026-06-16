#include<stdio.h>
int main(){
    // first matrix order
    int m;
    printf("enter no of rows  of first matrix:");
    scanf("%d",&m);
      int n;
    printf("enter no of columns  of first matrix:");
    scanf("%d",&n);
    // input the first matrix
    printf("\n enter elements of the first matrices");
    
    int a[m][n]; 
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

     // second matrix order
    int p;
    printf("enter no of rows  of second matrix:");
    scanf("%d",&p);
      int q;
    printf("enter no of columns  of second matrix:");
    scanf("%d",&q);
    // input the second matrix
    printf("\n enter elements of the second matrices");
    
    int b[p][q]; 
    for(int i=0;i<p;i++){
        for (int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    // check
    if(n!=p){
        printf("The matrix cannot be multiplied");
    }
    else{
        // multiplication
        int res[m][q];
        for(int i=0;i<m;i++){
            for( int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k=n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
         for(int i=0;i<m;i++){
            for( int j=0;j<q;j++){
               printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}