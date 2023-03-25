#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
      int low = 0;
      int high = nums.size()-1;
      while(low <= high)
      {
        int mid = low + (high-low)/2;
        // cout<<mid<<" "<<nums[mid]<<" ";
        if(nums[mid] == target)
        {
          return true;
        }
        else if(nums[low] == nums[mid] && nums[mid] == nums[high])
        {
          low++;
          high--;
        }
        else if(nums[low] <= nums[mid])
        {
          if(nums[low] <= target && nums[mid] >= target)
          {
            high = mid - 1;
          }
          else
          {
            low = mid+1;
          }
        }
        else
        {
          if(nums[mid] <= target && nums[high] >= target)
          {
            low = mid + 1;
          }
          else
          {
            high = mid - 1;
          }
        }
      }
      return false;
    }
};

int main()
{

}