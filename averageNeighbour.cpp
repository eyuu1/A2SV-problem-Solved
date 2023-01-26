class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      
      sort(nums.begin() , nums.end());

       for(int i=1 ; i<nums.size()-1 ; i+=2){
           
            swap(nums.at(i), nums.at(i+1));     
        }
    return nums;
    }
};

