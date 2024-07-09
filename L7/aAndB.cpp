#include<iostream>
using namespace std;
int aAndB(int a, int b){
    return a|b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<aAndB(a,b);

    return 0;
}