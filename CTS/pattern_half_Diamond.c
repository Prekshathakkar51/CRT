// Input: 3 4
// Output: 
// 3
// 44
// 555
// 6666
// 555
// 44
// 3

#include<stdio.h>

int main(){
    int start, len;
    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter len: ");
    scanf("%d", &len);
    int temp = start;
    for(int i = 1; i <= len; i++){
        
        for(int j = 1; j <= i; j++){
            printf("%d", temp);
        }
        temp++;
        printf("\n");
    }

    temp = temp-1;

    for(int i = 1; i <= len-1; i++){
        temp--;
        for(int j = len-1; j >= i; j--){
            printf("%d", temp);
        }
        
        printf("\n");
    }
    return 0;
}
