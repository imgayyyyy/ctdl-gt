 #include <stdio.h>
 #include <stdlib.h>

int main() {
    arr[10] = {1, 4, 7, 2, 5, 6, 3, 10, 9, 11};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf(" %d\n", length);
    for (int i = 0; i < length; i++) {  //o(n)
        for (int j = 0; j < length - 1 - i; j++) {  //o(n)
           if (arr[j] > arr[j + 1]) {
               int a = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = a;
           }
       }
   }
   for (int i = 0; i < length; i++) {
       printf("%d\n", arr[i]);
   }
   return 0;
}

// o(n) + o(n)=o(n)