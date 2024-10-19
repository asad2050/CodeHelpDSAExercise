#include <bits/stdc++.h>
using namespace std;

int maximalRectangle(vector<vector<char>> &matrix)
{
    int rows = matrix.size();
    int cols = 0;
    if (rows)
    {
        cols = matrix[0].size();
    }
    vector<int> heights(cols, 0);
    stack<int> s;
    for (int i = 0; i < cols; i++)
    {
        int height = 0;
    cout<<"col "<<i<<endl;
        for (int j = 0; j < rows; j++)
        {

            if (matrix[j][i] == '1')
            {
                if (j > 0 && matrix[j - 1][i] == '1')
                {
                   
                        height++;
                }
                else if (j > 0)
                {
                    if (matrix[j - 1][i] == '0')
                    {
                        height = 1;
                    }
                    
                }       
                else if(j==0)
                {
                    height = 1;
                }
            }
            cout<<height<<" ";
            heights[i] = height;
        }
        cout<<endl;
    }
    //    sort(heights.begin(),heights.end(),[](int a, int b) {
    //     return a > b; // For descending order
    // });

    for (auto it : heights)
    {
        cout << it << endl;
    }
    int maxArea = 0;
    int index = 0;

    while (index < heights.size())
    {
        if (s.empty() || heights[index] >= heights[s.top()])
        {
            s.push(index++);
        }
        else
        {
            int topOfStack = s.top();
            s.pop();
            int area = heights[topOfStack] * (s.empty() ? index : index - s.top() - 1);
            maxArea = std::max(maxArea, area);
        }
    }

    while (!s.empty())
    {
        int topOfStack = s.top();
        s.pop();
        int area = heights[topOfStack] * (s.empty() ? index : index - s.top() - 1);
        maxArea = std::max(maxArea, area);
    }

    return maxArea;
}
int main()
{
    // vector<vector<char>> matrix={{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
    // vector<vector<char>> matrix={{'1'}};
    // vector<vector<char>> matrix={{'1','0'}};
    vector<vector<char>> matrix = {{'0', '1'}, {'0', '1'}};
    cout << maximalRectangle(matrix);
    return 1;
}