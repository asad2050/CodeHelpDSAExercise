#include <bits/stdc++.h>
using namespace std;
void alternateSwap(int arr[],int n){
     if(n%2==0){
  for (int i = 0; i <n; i += 2) {
    
    swap(arr[i], arr[i + 1]);}
    
  }
  else if(n%2==1){
    for (int i = 0; i <n-1; i += 2) {
    
    swap(arr[i], arr[i + 1]);}
  }
  
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }
}
int main() {
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
  int arr[10];
  cout<<"Enter the numbers:";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
    alternateSwap(arr,n);

  return 0;
}