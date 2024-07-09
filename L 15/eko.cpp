#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int m,int mid){
    int woodSum=0;

    for(int i=0;i<n;i++){
        if(arr[i]>mid){
 int extra= abs(arr[i]-mid);
            woodSum+=extra;
        }
       
    }
    // cout<<woodSum<<endl;
    if(woodSum>=m){
        return true;
    }
    else{
        return false;
    }
}
int Eko(int arr[],int n, int m){
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi= max(maxi,arr[i]);
    }

    int e= maxi;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        cout<<s<<' '<<e<<' '<<mid<<endl;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+ (e-s)/2;
    }
    return ans;
}
int main(){
   int arr[4]= {20, 15,10, 17};
   int arr2[5]={4,42,40,26,46};
   
    cout<<Eko(arr2,5,20);
    return 0;
}