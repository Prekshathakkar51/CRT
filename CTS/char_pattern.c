// Ip: 5
// Op: 
// a
// ab
// abc
// abcd
// abcde
#include<stdio.h>
void printCharPattern(int n);

int main(){
    int n;
    scanf("%d", &n);
    printCharPattern(n);
    return 0;
}

void printCharPattern(int n){
    // logic

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", 'a' + j);
        }
        printf("\n");
    }
    


}



