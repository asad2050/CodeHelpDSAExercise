 #include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
 using namespace std;
 
 bool uniqueOccurrences(int arr[],int size) {
        int count[1000]={0};

        for(int i=0;i<size;i++){
            if(i+1!=size|| i>0){
            if((arr[i]==arr[i-1] || arr[i]==arr[i+1]) && count[arr[i]]!=0) {
                continue;
            }
            }
            count[arr[i]]=1;
        for(int j=i+1;j<size-i;j++){
            if(arr[i]==arr[j] && i!=j){
                count[arr[i]]++;
                continue;
            }
        }

        }
        for(int i=0;i<size;i++){
            if(i+1!=size){
            if(count[arr[i]]==count[arr[i+1]] && arr[i]!=arr[i+1]){
                cout<< false;
            }
            }
        }
        cout<< true;
    }
 bool uniqueOccurrences1(vector<int>& arr) {
        unordered_map<string, int> countMap;
        
        for(int i=0;i<arr.size();i++){
          
            if(i+1<=arr.size()){
            if((arr[i]==arr[i-1]|| arr[i]==arr[i+1]) && countMap[to_string(arr[i])]>0) {
                goto continue2;
            }
            }
            countMap[to_string(arr[i])]= 1;
        for(int j=0;j<arr.size();j++){
            if(arr[i]==arr[j] && i!=j){
                countMap[to_string(arr[i])]++;
            }
        }
        continue2:;

        }
        for(int i=0;i<arr.size();i++){
            if(i+1<=arr.size()){
            if((countMap[to_string(arr[i])]==countMap[to_string(arr[i+1])]) && arr[i]!=arr[i+1]){
                return false;
            }
            }
    //     for (auto x : countMap) 
    //  cout << x.first << " " <<  
    //         x.second << endl; 
        }
        return true;
}
     
// solved
bool uniqueOccurrences2(vector<int>& arr) {
         map<int,int> countMap;
        int n=arr.size();
bool ans=true;
for(int i=0; i<n; i++){
    if(i+1<n && i+1>0){
         if((arr[i]==arr[i-1]|| arr[i]==arr[i+1]) && countMap[arr[i]]>1){
        continue;
    }
   
}
countMap[arr[i]]=1;

int j;
for(j=0; j<n; j++ ){
if( arr[i]==arr[j] && i!=j ){
countMap[arr[i]]++;
}
}
//     for (auto i : countMap) 

//         cout << i.first << " \t\t\t " << i.second << endl; 
  
// }
        // for(int i=0;i<n;i++){
            // if(i+1<n-1){
            //     if(countMap[arr[i]]==countMap[arr[i+1]] && arr[i]!=arr[i+1]){
                    
            //         return false;

            //     }

            // }
            int c=0;
            for(int i=0;i<n;i++){

                if(i+1<=n-1 && arr[i]!=arr[i+1] && countMap[arr[i]]==countMap[arr[i+1]]){
            cout<<"Counts"<<c++<<endl;
            cout<<arr[i]<<' '<<countMap[arr[i]]<<endl;
                }
                }
            
        // }
       
}
return true;
}



    int main(){

    vector <int>arr={1,2,2,1,1,3};
    vector <int> arr1{-130,21,-154,159,-44,-126,165,68,-126,-126,-126,128,-94,165,-30,-44,-39,-94,21,-130,68,68,128,-130,-39,181,68,68,68,139,139,-39,21,21,-39,68,128,131,-126,-154,-30,165,21,159,181,-39,-126,131,-94,-44,131,128,21,-44,128,-94,183,-94,131,139,-44,128,21,181,-44,131,128,131,21,68,181,-44,-126,-130,131,-190,131,181,165,-94,165,165,-30,-154,68,-39,-44,165,-39,-126,68,68,-130,68,-94,181,-44,131,21,183,-44,21,-39,-130,-39,131,21,165,165,-126,165,-44,-94,68,68,-94,-126,-126,-30,181,165,68,-44,-39,-94,-126,-126,-30,68,181,-44,-94,-126,-44,-94,-30,131,165,-190,-130,-94,-94,181,128,181,181,181,139,-130,-94,-130,-130,139,-130,-90,-154,181,165,-30,-154,165,-190,159,165,139,-126,-44,131,-44,-190,-126,-130,-94,128,-154,68,-130,-130,68,21,-44,-30,-126,-126,131,159,-190,-126,181,139};
    cout<< uniqueOccurrences2(arr1)<<endl;
        vector<int>ar={-3,0,1,-3,1,1,1,-3,10,0};
// cout<< uniqueOccurrences2(ar)<<endl;
    vector<int>test1={1,2};

    // cout<<uniqueOccurrences2(test1);

    // unordered_map<string, int> mymap;
    //   mymap[to_string(arr[0])]=1;
    //   cout<<mymap[to_string(arr[0])]<<endl;
    //  mymap[to_string(arr[0])]++;
    //   cout<<mymap[to_string(arr[0])];
        // int size=6;
        // uniqueOccurrences(arr,size);
        return 0;
    }