// N candies
// M<=N, k(no.of candies that will always be der)
// N=10
// k<=5, if no of candies availabe is less then 5, then refill the jar
// if input>n ---> INvalid Input

// i/p - = 3
// o/p = No of candies sold:3
        // No of candies available: 7

// i/p = 0
// o/p = Invalid input
//         No of candies availabe:10   

#include<stdio.h>
int main(){
    int n = 10;
    int k = 5;
    int m;

    printf("Enter the candies required by the customer: ");
    scanf("%d", &m);

    if(m == 0 || m>10){
        printf("Invalid Input\n");
    }else{
        printf("No of candies sold: %d\n", m);
    }

    int available = n-m;

    if(available>=5){
        printf("No of candies availabe: %d", n-m);
    }
    else{
        printf("No of candies availabe: %d", 10);
    }

    

}
