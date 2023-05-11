#include<iostream>
#include<strings.h>
#include<string.h>
#include<string>
using namespace std;
string findKey(string n){
    char arr[10]={0};
    string ans="";
    for(int i=0;i<n.length();i++){
        char di=n[i];
        int d=di-'0';
        arr[d]++;
        if(arr[d]==2){
            ans.push_back(di);
        }
    }
    return ans;
}
int main(){
    cout<<"Enter a security key: ";
    string n;
    cin>>n;
    cout<<"Key is : "<<findKey(n);
}