#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& str){
    int left = 0;
    int right = str.size() - 1;

    while(left < right){
        if(str[left] != str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string str; 
    cout<<"Enter the string : ";
    cin>>str;

    if(isPalindrome(str)){
        cout<<str<<" is a palindrome."<<endl;
    }
    else{
        cout<<str<<" is not a palindrome."<<endl;
    }


    return 0;
}