#include<Stdio.h>
int main(){
    int n, i;
    int arr[100];

    do
    {
        printf("Nhap so phan tu cua mang (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int x;
    pritnf("nhap vi tri");
    scanf("%d", &x);
    int y;
    printf("nhap gia tri ");
    arr[x] = y;

    
}