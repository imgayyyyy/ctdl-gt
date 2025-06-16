#include<stdio.h>
int main(){

}
//1+2+3+4+...+n
//độ phức tạp không gian
void cach1(){
    int sum=0; //o(1)
    for(int i=0;i<n;i++){
        sum+=i; //o(n)
    }
} //--> o(n)
void cach2(){
    int sum=(n*(n+1))/2; //o(1)
}