#include<iostream>
using namespace std;
int main(){
    int a[4] = {1,7,9,11};
    int b[4]={0};
    for(int i=0;i<4;i++){
        b[(i+2)%4]  = a[i];
    }
    for(int i=0;i<4;i++){
        cout<<b[i]<<' ';
    }
    return 0;
}