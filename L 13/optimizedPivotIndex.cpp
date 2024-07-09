 #include <vector>
#include<iostream>
using namespace std;
 int pivotIndex(vector<int>& nums) {
        int n= nums.size();
       // Calculate total sum
       int totalSum=0;
for(int i = 0; i < n; i++){
    totalSum += nums[i];
}
int leftSum =0;

// Iterate through array and check for pivot index
for(int i = 0; i < n; i++){
    // Calculate right sum
    
    int rightSum = totalSum - leftSum - nums[i];
    
    // Check for pivot index
    if(leftSum == rightSum){
        return i;
    }
    
    // Update left sum
    leftSum += nums[i];
}

return -1;
    }
    int main(){

   vector <int> arr={1,7,3,6,5,6};
    int a = pivotIndex(arr);
    cout << endl<< a;
}