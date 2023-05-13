// 'r' is no. of seats in which 'n' no. of people should sit, in how many ways they can sit 

// i/p =
// 5 3

// o/p = 60

// logic = 5C3 * 3!

#include<stdio.h>
int fact(int n){
    int facto = 1;
    for(int i = 1; i<=n; i++){
        facto = facto *i;
    }
    return facto;
}
int main(){
    int r , n;
    printf("Enter no of seats: ");
    scanf("%d", &n);

    printf("Enter no of people: ");
    scanf("%d", &r);

    int n_fact = fact(n);

    // int r_fact = fact(r);

    int comb = fact(n) / fact(n-r)*fact(r);

    printf("%d", comb*n_fact);




}
