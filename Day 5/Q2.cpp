#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int left=0;
    int right=s.length()-1;

    bool is_palindrome=true;
    while(left<right){
        if(s[left]!=s[right]){
             is_palindrome=false;
             break;
        }
        left++;
        right--;
    }
    if(is_palindrome){
        cout<<"The string is a palindrome." <<endl;
    }
    else{
        cout<<"The string is NOT a palindrome." <<endl;

    }
    return 0;
}
