#include<stdio.h>
int main() {
    int n,m;
    do {
        printf("nhap so hang");
        scanf("%d",&n);
        printf("\nnhap so cot");
        scanf("%d",&m);
        if (n<=0 || m<=0) {
            printf("khong hop le");
        }
    }while(n<=0 || m<=0);

    int arr[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            printf("\ngia tri arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(arr[i][j]>max) {
                max=arr[i][j];
            }else if (arr[i][j]<min) {
                min=arr[i][j];
            }
        }
    }
    printf("\nmax : %d",max);
    printf("\nmin : %d",min);
    return 0;
}