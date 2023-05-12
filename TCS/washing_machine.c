// Principle - Fuzzy System
// low level water --> time = 25 min, weight <= 2000 g, 
// medium level --> time = 35 min, weight b/w 2001- 4000 g
// high level --> time = 45 min, weight >= 4000 g
// max capacity = 7000 g
// time = 0 min, weight = 0 g

// func(weight), weight range = 0-7000--> input
// estimated time ---> output (if overloaded), if any other input then show "INVALID INPUT"


// i/p = 2000
// o/p = Time estimated : 25 minutes

#include<stdio.h>

int func(int w){

    if( w <= 2000 && w > 0){
        return 25;
    }
    else if(w >= 2001 && w<= 4000){
        return 35;
    }else if(w >= 4000 && w<=7000){
        return 45;
    }else if(w == 0){
        return 0;
    }else{
        return 1;
    }

}

int main(){
    int w;
    printf("Enter the weight: ");
    scanf("%d", &w);

    int time = func(w);

    if(time == 0){
        printf("Time estimated: %d", 0);
    }
    else if(time == 1){
        printf("INVALID INPUT");
    }
    else{
        printf("Time estimated: %d", time);
    }  
}
