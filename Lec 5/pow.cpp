#include <iostream>
#include <math.h>
using namespace std;
long long int power(long long int a,long long int b){
int temp = a;
for (long long int i = 0; i < b - 1; i++) {
  a = a * temp;
}
  return a;
}
int main() {
    long long int a,b;
    cout<<"Enter the first number(a):";
    cin>>a;
    cout<<"Enter the second number(b):";
    cin>>b;
  cout<<power(a,b);
  return 0;
}
