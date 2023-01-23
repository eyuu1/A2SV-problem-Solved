class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int temp;
        vector<int> counter(nums.size());
        for(int i=0 ; i<nums.size() ; i++){
            int count=0;
            temp=nums.at(i);
            for(int j=0 ; j<nums.size() ; j++){
                if(temp>nums.at(j)){
                    count++;
                }
            }
            counter.at(i)=count;
        }
        return counter;
    }
};
