#include<iostream>
using namespace std;
int fibo(int n){
    int f=0,s=1;// f=first,s=second.
    int sum=0;
    for(int i=0;i<n-2;i++){//<n-2 because we want to stop when s becomes nth element and we already have first 2 elements so n-2.
        int temp = s;
        s=f+s;
        f=temp;
    }
    return s;
}
int main(){
    int n;
    cout<<"enter the nth term:";
    cin>>n;
    cout<<fibo(n);
    return 0;
}