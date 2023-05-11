// initial number = num and number of digits = n as input, print all the palindrome numbers of n digits starting from initial number num

// #include<stdio.h>
// #include<string.h>

// void printPalindrome(int num, int digit){

// for(int i = 1; i<digit; i++){

// }

// } 

// int main(){

//     int num, digit;
//     printf("Enter num: ");
//     scanf("%d", &num);

//     printf("Enter digit: ");
//     scanf("%d", &digit);


// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkP(int n){
    stack<int> st;
    int d=0;int num=n;
    while(num){
        num=num/10;
        d++;
    }
    num=n;
    for(int i=0;i<d/2;i++){
        st.push(num%10);
        num/=10;
    }
    if(d%2==1){
        num/=10;
    }
    for(int i=0;i<d/2;i++){
        if(st.top()==num%10){
            st.pop();
            num/=10;
        }
        else{
            return false;
        }
    }
    return true;
}
void printPallindrome(int num, int n){
    long long int lim=0;
    while(n){
        lim=lim*10+9;
        n--;
    }
    for(int i=num;i<=lim;i++){
        if(checkP(i)){
            cout<<i<<endl;
        }
    }
}
int main(){
    int num,n;
    cout<<"Enter starting number: ";
    cin>>num;
    cout<<"Enter digit of number: ";
    cin>>n;
printPallindrome(num,n);
}
