    #include<bits/stdc++.h>
    using namespace std;
int median(vector<vector<int>> &matrix, int R, int C){
        // code here     
      
        int n= R*C;
        int mid= (n-1)/2;
        int row= mid/2;
        int col =mid%2;
        cout<<row<<col<<endl;
        cout<<matrix[row][col];
        return 0;
    }

 
int main(){
    vector<vector<int>> matrix ={{1,3,5},{2,6,9},{3,6,9}};
    int ans = median(matrix,3,3);
    return 0;
}