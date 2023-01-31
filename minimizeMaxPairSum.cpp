class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int sum;
        priority_queue<int>p;
        int last=nums.size()-1;
        for(int i=0 ; i<last ; i++ ){
            sum= nums.at(i)+nums.at(last);
            p.push(sum);
            last--;
        }

        return p.top();
    }
};
