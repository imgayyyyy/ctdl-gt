#include<stdio.h>
void main(){
    int array[6]={1,2,3,4,5,6}; //O(1)
    int count=0;//O(1)
    int k=3;//O(1)
    for(int i=0;i<6;i++){//0(1)
        if(array[i]==k){
            count++;
        }
    }
}

// 0(1)+0(1)+0(1)+0(1)=0(1)