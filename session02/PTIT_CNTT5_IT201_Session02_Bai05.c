#include<stdio.h>
int main(){
    int n;
    int arr[100];

    do
    {
        printf("Nhap so phan tu cua mang (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    int indexDelete;
    scanf("%d", &indexDelete);
    for (int i = indexDelete; i < size - 2;i++){
        arr[i] = arr[i + 1];
    }
    
}