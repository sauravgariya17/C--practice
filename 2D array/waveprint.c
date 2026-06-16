 #include<stdio.h>
int main(){
   
    int m;
    printf("enter no of rows  of first matrix:");
    scanf("%d",&m);
      int n;
    printf("enter no of columns  of first matrix:");
    scanf("%d",&n);
  
    printf("enter elements of the first matrices \n");
    
    int a[m][n]; 
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // wave print
     for(int i=0;i<m;i++){
        if(i%2==0){
        for (int j=0;j<n;j++){
         printf("%d",&a[i][j]);
        }
    }
    else{
        for (int j=n-1;j<0;j--){
         printf("%d ",&a[i][j]);
        }

    }
        printf("\n");
    }
    
    return 0;
}