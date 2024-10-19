const long long m=1000000007;
#include <iostream>
using namespace std;
int factorial(int n){
            if(n<=1){
                return 1;
            }
            
            return (1LL* (n%m)*(factorial(n-1))%m)%m;
}

int main()
{
    
    cout<<factorial(212);
    return 0;
}