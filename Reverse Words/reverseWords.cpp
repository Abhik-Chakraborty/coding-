#include<bits/stdc++.h>
using namespace std;

string reverseWords(string str){
    vector<string> words;
    string word;

    for(int i = 0; i < str.size(); i++){
        if(str[i] != '.'){
            word += str[i];
        }
        else{
            words.push_back(word);
            word = "";
        }
    }
    words.push_back(word);

    int j = words.size() - 1;
    for(int i = 0; i < j; i++, j--){
        swap(words[i], words[j]);
    }


    string result;
    for(int k = 0; k < words.size(); k++){
        result += words[k];
        if(k < words.size() - 1){
            result += ".";
        }
    }
    return result;

}

int main() {
    string str = "i.like.this.program.very.much";
    cout<<reverseWords(str)<<endl;


    return 0;
}