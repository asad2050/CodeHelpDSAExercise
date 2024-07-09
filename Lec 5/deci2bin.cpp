#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int deci=5;
    
    int ans=0;
    int i=0;
    while(deci != 0){

        int lastbit = deci & 1;
        cout<<ans<<" "<<lastbit;
        ans = (lastbit * pow( 10,i))+ans;

        deci =deci>>1;

         i++;
    }
    cout<<"binary number is "<<ans;
    return 0;
}