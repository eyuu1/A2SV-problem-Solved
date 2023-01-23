class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
       
        for(int i=0 ; i<nums.size() ; i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                if(nums.at(i)>nums.at(j)){
                    swap(nums.at(i) , nums.at(j));
                }
            }
            
    }
    int curr=0;
    vector<int>targetCounter;
    for(int i=0 ; i<nums.size() ; i++){
        if(nums.at(i)==target){
            targetCounter.push_back(i);
        }
    }

   return targetCounter;
     
};
