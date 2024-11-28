#include <stdio.h>
int main() {
    int rows,cols;
    printf("enter the number of rows amd columns:");
    scanf("%d%d",&rows,&cols);
    int a[rows][cols],b[rows][cols],sum[rows][cols];
    printf("enter elements of matrixA:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf"%d",&a[i][j];
        }
    }
    printf("enter the elements of matrixB:\n");
    for (int i=0;i<rows;i++){
        for (int j=0;<cols;j++){
            sum[i][j]=a[i][j];
        }
    }
    printf("resultant matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d",sum[i][j]);
        }
       printf"\n");
    }
    return 0;
}
             
