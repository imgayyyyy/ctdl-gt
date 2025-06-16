#include<stdio.h>
int main(){
    printfdouble;
}
void printdouble(int n){
    int i=1;// O(1)
    while(i<n){
        printf("%d\n",i);
        i*=2;// o(log(n))
    }
}
//-->o(log(n))