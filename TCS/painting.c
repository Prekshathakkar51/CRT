// interior wall painiting cost = Rs. 18/sq.ft
// exterior wall painting cost = Rs. 12/sq.ft

// i/p = 1) no. of interior wall
//       2) no. of exterior wall
//       3) surface area of each interior wall in units sq.ft
//       4) surface area of each exterior wall in units sq.ft

// if no of walls = 0, skip surface area values from user

// Calculate and print total cost of painting



// Sample i/p 
// 6
// 3
// 12.3
// 15.2
// 12.3
// 15.2
// 12.3
// 15.2
// 10.10
// 10.10
// 10.00

// o/p TOtal estimated cost : 1847.4 INR

#include<Stdio.h>

int main(){
    int in, ex; 
    float surfA_in, surfA_ex;
    float sum_in = 0, sum_ex = 0;
    printf("Enter no. of interior walls: ");
    scanf("%d", &in);
    printf("Enter no. of exterior walls: ");
    scanf("%d", &ex);

    if(in == 0 && ex == 0){
        printf("Total estimated cost: 0 INR");
    }
    else{
        for( int i = 1; i<=in ; i++){
        printf("Enter surface ares of %d interior wall: ", i);
        scanf("%f", &surfA_in);

        sum_in += surfA_in;
    }

    for( int i = 1; i<=ex ; i++){
        printf("Enter surface ares of %d exterior wall: ", i);
        scanf("%f", &surfA_ex);

        sum_ex += surfA_ex;
    }

    float cost_in = sum_in*18;
    float cost_ex = sum_ex*12;

    float total_cost = cost_in + cost_ex;

    printf("Total estimated cost: %0.1f INR", total_cost);
    }

    return 0;


}



