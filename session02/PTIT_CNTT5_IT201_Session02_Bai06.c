#include<Stdio.h>
int main(){
    // int arr[10] = {1, 2, 3, 4};
    int n;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n;i++){
        scanf("%d", arr[i]);
    }
    
    int size = sizeof(arr) / sizeof(arr[0]);

    int post;
    scanf("%d", &post);
    for (int i = size; i > post; i--)
    {
        arr[i] = arr[i - 1];
    }
    // arr[post] = 5;
    printf("gia tri them");
    scanf("%d", &arr[post]);
}