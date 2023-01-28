class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<int> subArray;
        vector<bool> answer;
        for(int i=0 ; i<l.size() ; i++){
            for(int j=l.at(i) ; j<=r.at(i) ; j++){
                subArray.push_back(nums.at(j));
            }

            answer.push_back(check(subArray));
            subArray.clear();
        }
       return answer;
    }

     bool check(vector<int> c){
        sort(c.begin() , c.end());
        int dif=c.at(1)-c.at(0);
        bool same = true;
        for(int i=1 ; i<c.size() ; i++){
            if((c.at(i)-c.at(i-1)) != dif ){
                same =false;
            }
        }
        return same;
    }

};
