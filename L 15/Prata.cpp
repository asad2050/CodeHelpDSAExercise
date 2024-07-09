#include<iostream>
#include<vector>
using namespace std;
bool isPossible(int arr[],int P,int L, int mid){

    int totalPrata =0;
    for(int i=0;i<L;i++){
        int timeSum=0;
        int factor=arr[i];
        int countR=1;
        while(timeSum+(factor*countR)<=mid){
            timeSum+= (factor*countR);
            countR++;
            
        }
        totalPrata+=(countR-1);
        if(totalPrata>=P){
            return true;
        }
        
    }
    return false;
    
}
int Prata(int arr[],int P, int L){
    int s=0;
    int e =P*L;
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e){
    if(isPossible(arr,P,L,mid)){
        ans= mid;
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
    }
    return ans;
    
}


int main(){
    
    int t;
    scanf("%d", &t);
    while(t--){
        int P;
        cin>>P;
        int L;
        cin>>L;
        int arr[L];
        for(int i=0;i<L;i++)
            cin>>arr[i];
        cout<<Prata(arr,P,L);
    }
//    int arr[4]= {1, 2,3, 4};
// //    int arr2[5]={4,42,40,26,46};
   
//     cout<<Prata(arr,10,4);
    return 0;
}