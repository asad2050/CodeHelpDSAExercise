#include <iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>='A' && a<='Z'){
        cout<< "This is upper case";
    }
    else if(a>='a' && a<='z'){
        cout<< "This is lower case";
    }
     else if(a>='0' && a<='9'){
        cout<< "This is a number";
    }
    return 0;
}