#include<stdio.h>
#include<string.h>
void myStrcat(char *a, char *b){
    int m = strlen(a);
    int n = strlen(b);
    int i;
    for(i = 0; i<n; i++){
        a[m+i] = b[i];
    }
}

int main(){
    char str1[10] = "PRO"; 
    char str2[10] = "coder";
    myStrcat(str1,str2);
    printf("%s", str1);
}