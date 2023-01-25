class Solution {

    static bool cmp(string a, string b){
    return a + b > b + a;
};
public:
    string largestNumber(vector<int>& nums) {
        if(nums.size() == 0){
            return "";
        }

        vector<string> numbers;
        int i = 0;

        for(; i < nums.size(); i++){
            numbers.push_back(to_string(nums[i]));
        }

        sort(numbers.begin(), numbers.end(), cmp);
        string ans = "";

        for(i = 0; i < numbers.size(); i++){
            ans += numbers[i];
        }

        return ans[0] == '0' ? "0" : ans;
    }
};
