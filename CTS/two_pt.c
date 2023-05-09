
#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    
    int *ptr1, *ptr2;
    ptr1 = &arr[0];
    ptr2 = &arr[4];
    while(ptr2 != ptr1){
        printf("%d", *ptr2--);
    }
}