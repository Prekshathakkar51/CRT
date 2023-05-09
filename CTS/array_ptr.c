#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    int *ptr;
    int len = sizeof(arr)/sizeof(arr[0]);
    ptr = arr;
    int i;
    for(i=0; i<len; i++){
        printf("%d\t", *(ptr+i));
    }
    return 0;

}
