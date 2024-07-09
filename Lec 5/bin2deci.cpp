#include<iostream>
#include<math.h>
using namespace std;
int main(){
    
    int b=0b10000010000;
    int deci=0;
    int i=0;
    while(b){
        if(b&1){
            deci = deci+pow(2,i); 
        }
        i++;
        b=b>>1;
    }
    cout<<deci<<"  ";
    return 0;
}