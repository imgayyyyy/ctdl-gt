#include<Stdio.h>
int* mallocArray(int n) {  // o(n)
    int* arr = (int*)malloc(n * sizeof(int)); //0(n)
    for (int i = 0; i < n; i++) //o(n)
        arr[i] = i;
}
return arr;
//--> o(n) : phức tạp không gian
