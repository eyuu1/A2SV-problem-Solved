class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
              vector<int> temp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            temp.push_back(i);
        }

        if(temp.size()<=k)
            return nums.size();
        
        int res = 0;
        int diff = temp[k];

        res = max(res,diff);

        for(int i=k;i<temp.size()-1;i++)
        {
            diff = temp[i+1] - temp[i-k] - 1;
            res = max(res,diff);
        }

        diff = nums.size() - temp[temp.size()-1 - k]- 1;

        res = max(res,diff);
        
        return res;
    }
};
