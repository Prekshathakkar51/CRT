#include<stdio.h>


void prime(int n){
    int flag = 0;
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            flag++;
        } 
    }
    if(flag>0){
        printf("The number is not prime");
    }
    else{
    printf("The number is prime");
    }


}

void check(int n){

    if(n<0){
        printf("Please enter the +ve number: ");
        scanf("%d", &n);
        prime(n);
    }else{

        prime(n);
    }
}


int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    check(n);
    return 0;

}