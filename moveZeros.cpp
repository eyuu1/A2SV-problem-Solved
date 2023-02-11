class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),j,i;
        j=0;
        i=0;
        while(j<n){
            if(nums[j]!=0){
                nums[i]=nums[j];
                i++;
            }
            j++;
        }
        while(i<n){
            nums[i]=0;
            i++;
        }
    }
};
