   #include<bits/stdc++.h>
    using namespace std;
 vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n= mat.size();
        int m = mat[0].size();
                vector<int>count(n,0);
              
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]){
                    count[i]= m - j;
                   break;
                }
            }
        }
        // cout<<count[0];
            int maxIndex=0;
            int maxCount=0;
            for(int k=0;k<count.size();k++){
               if(count[k]>maxCount){
                maxIndex=k;
                maxCount=count[k];
               }

            }
        return {maxIndex, maxCount};
    }
    int main(){
        vector<vector<int>> a= {
            {0,1},{1,0}
        };
            rowAndMaximumOnes(a);
            return 0;
    }