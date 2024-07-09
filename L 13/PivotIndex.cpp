#include <vector>
#include<iostream>
using namespace std;
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        for(int i=0;i<n;i++){
            int Lsum=0;
            int Rsum=0;
            for (int j=i+1;j<n;j++){
                Rsum =Rsum + nums[j];
            }
            if(i==0 ){
                if (Rsum==0){
                    return 0;
                }
                else{
                    continue;
                }
                
            }
           for(int j=i-1;j>=0;j--){
               Lsum = Lsum + nums[j];
            }
            if(i==n-1 ){
                if( Lsum==0)
                {
                    return n-1;
                }
                else{
                    break;
                }
              
            }
             if(Lsum == Rsum){
                return i;
            }
            
        }
        return -1;
    }

int main(){

   vector <int> arr={1,7,3,6,5,6};
    int a = pivotIndex(arr);
    cout << endl<< a;
}