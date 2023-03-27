#include<bits/stdtr1c++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0 ; i < matrix.size();i++)
        {
            vector<int>v = matrix[i];
            if(v[0] <= target && v[v.size()- 1] >= target)
            {
                int low = 0;
                int high = v.size()-1;
                int mid = 0;
                while(low <= high)
                {
                    mid = (low + high)/2;
                    if(v[mid] == target)
                    {
                        return true;
                    }
                    else if(v[mid] < target)
                    {
                        low = mid + 1;
                    }
                    else
                    {
                        high = mid - 1;
                    }
                }
                return false;
            }

        }
        return false;
    }
};

int main()
{

}