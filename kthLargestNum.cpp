class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), [&](string a, string b) {
            if(a.size() != b.size()) {
                return a.size() < b.size();
            }
            else {
                return a < b;
            }
        });
        for(auto n: nums) cout << n << " ";
        return nums.end()[-k];
    }
};
