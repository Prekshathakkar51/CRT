// age     fees
//  <17     200
//  17-40   400
//  >40     300

// i/p = array[20] 0<age<120

#include<stdio.h>

int main(){
    int arr[20];

    int n;
    int fees = 0;
    printf("Enter the num of patients: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
  
        
        scanf("%d", &arr[i]);
    }



    for(int i = 0; i<n; i++){
        if(arr[i] < 17){
            fees = fees + 200;
        }
        else if(arr[i]>=17  && arr[i] < 40){
            fees = fees +400;
        }
        else if(arr[i]>=40 && arr[i]<120){
            fees = fees + 300;
        }

    }
    printf("Total income %d INR", fees);
    return 0;
}