#include<iostream>
using namespace std;
#include<math.h>
#include<vector>
int main(){
    int a[4] = {4,5,1};
    int n = 3;
    int m = 3;
    int b[4]={3,4,5};
   	int num1=0;
	int num2=0;
	int sum=0;

	for(int i=0;i<n;i++){
		num1 = num1*10+a[i];
         
	}
		for(int i=0;i<m;i++){
		num2 = num2*10 + b[i];
        
	}
  
	sum = num1+num2;
     
	int g= n>=m?n:m;
	vector <int> ans(g,0);
	for(int i=g-1;sum!=0;i--){
		int digit = sum%10;
        ans[i]=digit;
		sum=sum/10;

	}
	 for(int i=0;i<g;i++){
        cout<<ans[i]<<' ';
    }
    return 0;
}