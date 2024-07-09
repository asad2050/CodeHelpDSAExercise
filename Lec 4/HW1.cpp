#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
   int printvar= (n*n);
    while(i<n){
        int j=0;
        while(j<n){
            cout<<printvar<<" ";
            printvar=printvar-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}