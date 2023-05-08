#include<stdio.h>

int gcd(int a, int b){
    if(a == 0){
        return b;
    }
    return gcd(b%a, a);
}

int calculateGCD(int arr[], int n){
    int result = arr[0];
    for(int i = 1; i < n; i++){
        result = gcd(result, arr[i]);
    }
    return result;
}

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int gcd = calculateGCD(arr, n);
    printf("The GCD of the array is: %d\n", gcd);
    return 0;
}
