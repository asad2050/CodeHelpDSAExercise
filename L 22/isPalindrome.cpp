#include <bits/stdc++.h> 
using namespace std;
bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.length()-1;
      for (auto& x : s) { 
        x = tolower(x); 
    } 
    while(start<end){
        if(isalnum(s[start])&&isalnum(s[end])
        ){
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        if (isalnum(s[start]) && !isalnum(s[end])){
            end--;
        }
        if(!isalnum(s[start])&& isalnum(s[end])){
           start++;
        }
        if(!isalnum(s[start]) && !isalnum(s[end])){
            start++;
            end--;
        }
    }
    return true;
}


int main(){

    return 0;
}