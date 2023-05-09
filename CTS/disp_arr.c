#include<stdio.h>
void display(int *arr, int len);
int main(){
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    display(arr,len);
    return 0;

}

void display(int *arr, int len){
    for(int i=0; i<len; i++){
        printf("%d\t", *arr+i);
    }
}