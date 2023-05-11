// input: int data
// output: int security key
// i/p = 578378923
// o/p = 783
//  Approach print the repeated elements from the input
#include<stdio.h>
#include<math.h>

void Securitykey(int data){
    int count=(data==0)?1:log10(data)+1;  
    for(int i = 1; i<= count; i++){
        int rem = data%10;
        for(int j = 0; j<i; j++){
            if(rem ==  j){
                printf("%d", j);
            }
        }
        data /=10;
    }
}

// int main(){
//     int data[20];
//     for(int i = 0; i < 20; ++i) {
//      scanf("%d", &data[i]);
//   }
//     printf("Enter the data: ");
//     scanf("%d", &data);
//     Securitykey(data);
//     return 0;
// }

#include <stdio.h>

int main() {
    int num, digit, count[10] = {0}, i;
    int result = 0, multiplier = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // count the occurrence of each digit
    while (num != 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // extract repeated digits and build the result
    for (i = 0; i < 10; i++) {
        if (count[i] > 1) {
            result += i * multiplier;
            multiplier *= 10;
        }
    }

    // output the result
    printf("Repeated digits: %d\n", result);

    return 0;
}
