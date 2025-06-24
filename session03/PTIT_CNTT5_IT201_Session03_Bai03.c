#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("nhap kich thuoc mang");
    scanf("%d",&n);
    if (n<=0) {
        printf("kich thuoc mang khong hop le");
        return 0;
    }
    int *arr = (int*)malloc(n*sizeof(int));
    int number=0;
    printf("nhap gia tri cho tung phan tu\n");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++) {
        if (arr[i]%2==0) {
            number++;
            sum+=arr[i];
        }
    }
    float trungBinh=sum/number;

    printf("trung binh tong so chan la : %.2f",trungBinh);

    free(arr);


return 0;
}
