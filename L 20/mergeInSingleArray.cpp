#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> temp(m + n);

    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (nums1[i] < nums2[j])
        {
            temp[k++] = nums1[i++];
        }
        else
        {
            temp[k++] = nums2[j++];
        }
    }

    // copy first array k element ko
    while (j < m)
    {
        temp[k++] = nums2[j++];
    }

    while (i < n)
    {
        temp[k++] = nums1[i++];
    }

    // copy kardo second array k remaining element ko

    nums1 = temp;
    return nums1;
}
vector<int> merge2(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

        int i=0;int j=0;
        vector<int> temp;
        while(i<m+n &&j<n){
        //   cout<<i<<' '<<j<<endl;
            if( nums1[i]==0){
              nums1[i]=nums2[j];
                i++;
                j++;
            }
          
      else if(nums1[i]<=nums2[j]){
                i++;
            }
            else {
                if(nums1[i]<nums2[j+1]){
                     int tmp = nums1[i];
        nums1[i] = nums2[j];
        nums2[j] = tmp;
                    i++;
                }
            temp.push_back(nums1[i]);
            nums1[i]=nums2[j];
            i++;
            j++;
            }

        }
        int k=0;
        for(int k=0;k<temp.size();k++){
                nums1[i]=temp[k];
                i++;
        }

       return nums1;
   
}

int main()
{
    vector<int> a = {4, 5, 6, 0, 0, 0};
    vector<int> b = {1, 2, 3};
    vector<int> c = {1, 2, 3, 0, 0, 0};
    vector<int> d = {2, 5, 6};

    vector<int> result = merge2(a, 3, b, 3);
    for (auto i : result)
    {
        cout << i << endl;
    }
   vector<int> result1 = merge2(c, 3, d, 3);
    for (auto i : result1)
    {
        cout << i << endl;
    }
    return 0;
}
